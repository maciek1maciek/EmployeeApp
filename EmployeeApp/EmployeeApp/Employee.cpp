#include <iostream>
#include "Employee.h"
#include <cstring>
using namespace std;

Employee::Employee(string name, string surname, int seniority, int salary, position p):name(name),surname(surname),seniority(seniority),salary(salary),p(p){
	enumChange(p);
	
}



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
	out << 
		" Imie: " << emp.name << "\n" <<
		" Nazwisko: " << emp.surname << "\n" <<
		" staz: " << emp.seniority << "(w miesiacach) " << "\n" <<
		" pensja: " << emp.salary << "\n" <<
		" stanowisko: " << emp.valEnum << " \n" <<
		" ";
		return out;
}

string Employee::getName() {
	return name;
}

string Employee::getSurname() {
	return surname;
}

int Employee::getSeniority() {
	return seniority;
}
int Employee::getSalary() {
	return salary;
}
position Employee::getPosition() {
	return p;
}


