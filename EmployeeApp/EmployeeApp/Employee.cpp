#include <iostream>
#include "Employee.h"
#include <cstring>
using namespace std;

Employee::Employee(string s, char surname[], int seniority, int salary, position a){
	int counter = 0;
	for (;surname[counter]!='\0'; ++counter) {
		
	}

	size_t counter = strlen(surname); //funkcja ktora liczy znaki w tablicy

	for (int i = 0; i<counter+1&&i<19; ++i) {
		this->surname[i] = surname[i];

	}
	surname[19] = '\0';
}


