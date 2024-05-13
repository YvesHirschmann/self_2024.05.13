#include "CPerson.h"
#include <iostream>

int main()
{
	//Stack allocation
	CPerson StackPerson(21, "Tim", 'M');
	
	StackPerson.GetAge();
	StackPerson.SetAge(30);




	//Heap allocation
	CPerson* HeapPerson = new CPerson(12, "Karl", 'D');

	HeapPerson->GetAge();
	HeapPerson->SetAge(25);

	delete HeapPerson;


	return 0;
}