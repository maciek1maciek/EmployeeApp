#pragma once

enum position {
	teamLeader, ScrumMaster, JuniorDev, MidDev, SeniorDev
};

class Employee {
private:
	string n, s;
	char name[20],surname[20];
	int seniority, salary;		//seniority in months
public:
	Employee(string n,string s,int seniority,int salary,position a);
	char getName();
	char getSurnname();
	int getSeniority();
	int getSalary();
};
