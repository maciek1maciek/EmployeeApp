#include <iostream>
using namespace std;
#include "Employee.h"



int main() {
	int switchVar = 0,seniority,salary;
	string name, surname;
	bool petla = true;
	vector<Employee> listEmployees;

	while (petla) {
		switch (switchVar) {
		case 0: {
			cout << "Witaj w interfejsie uzytkownika !" << endl;
			cout << "" << endl;
			cout << "Wybierz opcje:" << endl;
			cout << "1. Dodanie pracownika" << endl;
			cout << "2. Wyswietlenie listy wszystkich pracownikow" << endl;
			cout << "3. Edycja danych pracownikow" << endl;
			cout << "4. Usuniecie pracownika" << endl;
			cout << "5. Szukaj pracownika" << endl;	//dodac opcje z pensja w tym
			cout << "6. Zapisz do pliku" << endl;
			cout << "7. Wczytaj z pliku" << endl;
			cout << "8. Zakoncz" << endl;
			cin >> switchVar;
			break;
		
		}
		case 1: {
			int enumVal;
			cout << "Dane pracownika:"<<endl;
			cout << "Imie :"<<endl;
			cin >> name;
			cout << "Nazwisko :"<<endl;
			cin >> surname;
			cout << "Stanowisko :"<<endl;
			cout << "1-Team Leader :"<<endl;
			cout << "2-Srum Master :"<<endl;
			cout << "3-Junior Dev :"<<endl;
			cout << "4-MidDev :"<<endl;
			cout << "5-SeniorDev :"<<endl;
			cin >> enumVal;
			position p=teamLeader;
			if (enumVal == 1) {
				 p = teamLeader;
			}
			else if (enumVal == 2) {
				p=ScrumMaster;
			}
			else if (enumVal == 3)
			{
				p=JuniorDev;
			}
			else if (enumVal == 4) {
				p=MidDev;
			}
			else if (enumVal == 5) {
				p=SeniorDev;
			}
			cout << "Staz pracy (w miesiacach): " << endl;
			cin >> seniority;
			cout << "Pensja: " << endl;
			cin >> salary;

			Employee employe(name, surname, seniority, salary, p);
			listEmployees.push_back(employe);
			//system("cls");
			switchVar--;
			break;
		}
		case 2: {
			cout << "Lista Wszystkich pracownikow";
			for (int i = 0; i < listEmployees.size(); i++)
			{
				cout << listEmployees[i] << endl;
			}
			switchVar=0;
			break;
		}
		case 3: {
			cout << "Edycja pracownika";
			cin >> switchVar;
			break;
		}
		case 4: {
			cout << "Dodanie pracownika";
			cin >> switchVar;
			break;
		}
		case 5: {
			cout << "Dodanie pracownika";
			cin >> switchVar;
			break;
		}
		case 6: {
			cout << "Dodanie pracownika";
			cin >> switchVar;
			break;
		}
		case 7: {
			cout << "Dodanie pracownika";
			cin >> switchVar;
			break;
		}
		case 8: {
			exit(0);
			break;
		}



		}

	}
		
	/*
	do {
		
		
		
		if (!(cin >> a))
	{
		cin.clear();
		cin.sync();
		cout << "blad";
	}
	else {

	}
	} while (a!=0);
	*/	
	char b[20] = "Maciej";
	
	Employee h(b,b,1,2,JuniorDev);
	

	
}