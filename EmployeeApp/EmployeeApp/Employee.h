#pragma once
#include <string>
#include <vector>
using namespace std;

enum position {
	teamLeader=1, ScrumMaster=2, JuniorDev=3, MidDev=4, SeniorDev=5
};

class Employee {
private:
	char name[20],surname[20];
	int seniority, salary;		//seniority in months
public:
	Employee(string name,string surname,int seniority,int salary,position a);
	void setName(char name[]);

};
