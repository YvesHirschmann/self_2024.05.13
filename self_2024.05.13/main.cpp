
#include "person.h"
#include <iostream>

int main()
{

	//Heap allocation
	SPerson* NewPerson = new SPerson;

	NewPerson->m_name	= "John";
	NewPerson->m_age	= 15;
	NewPerson->m_gender = 'M';

	SetAge(NewPerson, 18);

	std::cout << GetAge(NewPerson)  << std::endl; 
	std::cout << GetName(NewPerson) << std::endl;
	delete NewPerson;
	//...




	//Stack allocation
	SPerson Person;

	Person.m_name	= "Jane";
	Person.m_gender = 'F';
	Person.m_age	= 20;

	SetAge(&Person, 25);

	std::cout << GetAge(&Person)  << std::endl;
	std::cout << GetName(&Person) << std::endl;
	//...

	

	return 0;
}	