#pragma once
#include <string>
#include <vector>
using namespace std;

enum position {
	teamLeader=1, ScrumMaster=2, JuniorDev=3, MidDev=4, SeniorDev=5
};

class Employee {
private:
	string name,surname;
	position p;
	int seniority, salary;		//seniority in months
public:
	Employee(string name,string surname,int seniority,int salary,position p);
	friend ostream& operator<<(std::ostream& out, const Employee& emp);

};
