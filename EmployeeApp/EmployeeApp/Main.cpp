#include <iostream>
#include "Employee.h"
using namespace std;


int main() {
	int switchVar = 0,seniority,salary;
	char name[20],surname[20],enumVal;
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
			cin >> enumVal;
			if (enumVal == 0) {
				position p(teamLeader);
			}
			cout << "Staz pracy (w miesiacach): " << endl;
			cin >> seniority;
			cout << "Pensja: " << endl;
			cin >>salary;
			
			system("cls");
			switchVar--;
			break;
		}
		case 2: {
			cout << "Dodanie pracownika";
			cin >> switchVar;
			break;
		}
		case 3: {
			cout << "Dodanie pracownika";
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