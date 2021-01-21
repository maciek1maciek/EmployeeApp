#pragma once

enum position {
	teamLeader, ScrumMaster, JuniorDev, MidDev, SeniorDev
};

class Employee {
private:
	char name[20],surname[20];
	int seniority, salary;		//seniority in months
public:
	Employee(char name[],char surname[],int seniority,int salary,position a);
};
