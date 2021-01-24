#include <iostream>
using namespace std;
#include "Employee.h"

int main() {
	int switchVar = 0,seniority,salary,empNum=0;
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
			system("cls");
			switchVar--;
			break;
		}
		case 2: {
			system("cls");
			cout << " Lista Wszystkich pracownikow "<<endl;
			cout << " " << endl;
			for (int i = 0; i < listEmployees.size(); i++)
			{
				cout << " Pracownik nr: " << i + 1 << endl;
				cout << listEmployees[i] << endl;
			}
			switchVar=0;
			break;
		}
		case 3: {
			system("cls");
			int enumVal;
			int id=1;
			cout << " Edycja pracownika: "<<endl;
			cout << " Pracownika o ktorym numerze chcesz edytowac?"<<endl;
			cout << " " << endl;
			cout << " Lista Wszystkich pracownikow:" << endl;
			cout << " " << endl;
			for (int i = 0; i < listEmployees.size(); i++,id++)
			{
				cout <<" Pracownik nr: "<< id<<endl;
				cout << listEmployees[i] << endl;
			}

			cin >> empNum;
			--empNum;
			listEmployees.erase(listEmployees.begin() + empNum);

			cout << "Dane pracownika:" << endl;
			cout << "Imie :" << endl;
			cin >> name;
			cout << "Nazwisko :" << endl;
			cin >> surname;
			cout << "Stanowisko :" << endl;
			cout << "1-Team Leader :" << endl;
			cout << "2-Srum Master :" << endl;
			cout << "3-Junior Dev :" << endl;
			cout << "4-MidDev :" << endl;
			cout << "5-SeniorDev :" << endl;
			cin >> enumVal;
			position p = teamLeader;
			if (enumVal == 1) {
				p = teamLeader;
			}
			else if (enumVal == 2) {
				p = ScrumMaster;
			}
			else if (enumVal == 3)
			{
				p = JuniorDev;
			}
			else if (enumVal == 4) {
				p = MidDev;
			}
			else if (enumVal == 5) {
				p = SeniorDev;
			}
			cout << "Staz pracy (w miesiacach): " << endl;
			cin >> seniority;
			cout << "Pensja: " << endl;
			cin >> salary;
			Employee employe(name, surname, seniority, salary, p);	
			listEmployees.insert(listEmployees.begin()+empNum,employe);
			break;
		}
		case 4: {
			system("cls");
			cout << "Usuwanie pracownika";
			int enumVal;
			cout << " Pracownika o ktorym numerze chcesz usunac?" << endl;
			cout << " " << endl;
			cout << " Lista Wszystkich pracownikow:" << endl;
			cout << " " << endl;
			for (int i = 0; i < listEmployees.size(); i++)
			{
				cout << " Pracownik nr: " << i + 1 << endl;
				cout << listEmployees[i] << endl;
			}

			cin >> empNum;
			--empNum;
			listEmployees.erase(listEmployees.begin() + empNum);
			switchVar = 0;
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
	
}