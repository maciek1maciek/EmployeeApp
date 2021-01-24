#include <iostream>
#include "Employee.h"
#include <cstring>
using namespace std;

Employee::Employee(string name, string surname, int seniority, int salary, position p):name(name),surname(surname),seniority(seniority),salary(salary),p(p){
	enumChange(p);
	init();
}

void Employee::init() {
	idNot = ID;
	this->ID++;
}
int Employee::ID = 1;


string Employee::enumChange(position p) {
	switch (p) {
		case 1:
			valEnum= "Team Leader";
			break;
		case 2:
			valEnum = "Scrum Master";
			break;
		case 3:
			valEnum = "Junior Dev";
			break;
		case 4:
			valEnum = "Mid Dev";
			break;
		case 5:
			valEnum = "Senior Dev";
			break;
	}
	return valEnum;
}

ostream& operator<<(std::ostream& out, const Employee& emp) {
	out << " \n" <<
		" Pracownik nr: " << emp.idNot << "\n" <<
		" Imie: " << emp.name << "\n" <<
		" Nazwisko: " << emp.surname << "\n" <<
		" staz: " << emp.seniority << "(w miesiacach) " << "\n" <<
		" pensja: " << emp.salary << "\n" <<
		" stanowisko: " << emp.valEnum << " \n" <<
		" ";
		return out;
}


