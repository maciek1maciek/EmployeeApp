#include <iostream>
using namespace std;
#include "Employee.h"
#include<fstream>

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
			cout << "5. Szukaj pracownika po cechach" << endl;	//dodac opcje z pensja w tym
			cout << "6. Szukaj pracownika powyzej/ponizej podanej pensji" << endl;	//dodac opcje z pensja w tym
			cout << "7. Zapisz do pliku" << endl;
			cout << "8. Wczytaj z pliku" << endl;
			cout << "9. Zakoncz" << endl;
			cin >> switchVar;
			break;

		}
		case 1: {
			system("cls");
			int enumVal;
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
			listEmployees.push_back(employe);
			system("cls");
			switchVar--;
			break;
		}
		case 2: {
			cout << " Lista Wszystkich pracownikow " << endl;
			cout << " " << endl;
			for (int i = 0; i < listEmployees.size(); i++)
			{
				cout << " Pracownik nr: " << i + 1 << endl;
				cout << listEmployees[i] << endl;
			}
			switchVar = 0;
			break;
		}
		case 3: {
			system("cls");
			int enumVal;
			int id = 1;
			cout << " Edycja pracownika: " << endl;
			cout << " Pracownika o ktorym numerze chcesz edytowac?" << endl;
			cout << " " << endl;
			cout << " Lista Wszystkich pracownikow:" << endl;
			cout << " " << endl;
			for (int i = 0; i < listEmployees.size(); i++, id++)
			{
				cout << " Pracownik nr: " << id << endl;
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
			listEmployees.insert(listEmployees.begin() + empNum, employe);
			switchVar = 0;
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
			int choice;
			cout << "Wyszukaj pracownika " << endl;
			cout << "Podaj ceche pracownika ktorego chcesz wyszukac: " << endl;
			cout << "1.Imie " << endl;
			cout << "2.Nazwisko " << endl;
			cout << "3.Stanowisko " << endl;
			cout << "4.Staz pracy (w miesiacach) " << endl;
			cout << "5.Pensja " << endl;
			cin >> choice;

			if (choice == 1) {
				cout << "Podaj imie" << endl;
				cin >> name;

				for (int i = 0; i < listEmployees.size(); i++)
				{
					if (listEmployees[i].getName() == name) {
						cout << " Pracownik nr: " << i + 1 << endl;
						cout << listEmployees[i] << endl;
					}
				}
				switchVar = 0;
				break;
			}

			else if (choice == 2) {
				cout << "Podaj nazwisko" << endl;
				cin >> surname;

				for (int i = 0; i < listEmployees.size(); i++)
				{
					if (listEmployees[i].getSurname() == surname) {
						cout << " Pracownik nr: " << i + 1 << endl;
						cout << listEmployees[i] << endl;
					}
				}
				switchVar = 0;
				break;
			}

			else if (choice == 3) {
				int pos;
				cout << "Podaj stanowisko" << endl;
				cout << "1-Team Leader :" << endl;
				cout << "2-Srum Master :" << endl;
				cout << "3-Junior Dev :" << endl;
				cout << "4-MidDev :" << endl;
				cout << "5-SeniorDev :" << endl;
				cin >> pos;

				for (int i = 0; i < listEmployees.size(); i++)
				{
					if (listEmployees[i].getPosition() ==pos) {
						cout << " Pracownik nr: " << i + 1 << endl;
						cout << listEmployees[i] << endl;
					}
				}
				switchVar = 0;
				break;
			}

			else if (choice == 4) {
				cout << "Podaj dlugosc stazu pracy:" << endl;
				cin >> seniority;

				for (int i = 0; i < listEmployees.size(); i++)
				{
					if (listEmployees[i].getSeniority() == seniority) {
						cout << " Pracownik nr: " << i + 1 << endl;
						cout << listEmployees[i] << endl;
					}
				}
				switchVar = 0;
				break;
			}

			else if (choice == 5) {
				cout << "Podaj wysokosc pensji:" << endl;
				cin >> salary;

				for (int i = 0; i < listEmployees.size(); i++)
				{
					if (listEmployees[i].getSalary() == salary) {
						cout << " Pracownik nr: " << i + 1 << endl;
						cout << listEmployees[i] << endl;
					}
				}
				switchVar = 0;
				break;
			}

			
		}
		case 6: {
			int down, up;
			cout << "Podaj dolny przedzial pensji pracownika/ow:"<<endl;
			cin >> down;
			cout << "Podaj gorny przedzial pensji pracownika/ow:"<<endl;
			cin >> up;

			for (int i = 0; i < listEmployees.size(); i++)
			{
				if (listEmployees[i].getSalary() >down && listEmployees[i].getSalary() <up) {
					cout << " Pracownik nr: " << i + 1 << endl;
					cout << listEmployees[i] << endl;
				}
			}
			switchVar = 0;
			break;
		}
		case 7: {
		
			ofstream save("dane.txt");

			for (int i = 0; i < listEmployees.size(); i++) {
				save << listEmployees[i];
			}
			
			save.close();

			return 0;

			break;
		}
		case 8: {
			exit(0);
			break;
		}



		}

	}
	
}