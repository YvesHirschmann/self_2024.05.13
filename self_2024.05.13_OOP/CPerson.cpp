#include "CPerson.h"

/*
Konstruktor

	//Standardkonstruktor:
		CPerson::CPerson(int age, std::string name, char gender)
		{
			this->m_age		= age;
			this->m_name	= name;
			this->m_gender	= gender;
		}



	//Kopierkonstruktor:
		CPerson::CPerson(const CPerson& _rPerson)
		{
			this->m_age		= _rPerson.m_age;
			this->m_name	= _rPerson.m_name;
			this->m_gender	= _rPerson.m_gender;
		}



	//Operatorüberladung: (Überschreibt eine Instanz)
		CPerson& CPerson::operator =(const CPerson& _rPerson)
		{
			
			this->m_age		= _rPerson.m_age;
			this->m_name	= _rPerson.m_name;
			this->m_gender  = _rPerson.m_gender;
		
		}
*/

//Initialisierungsliste
CPerson::CPerson(int age, std::string name, char gender)
	: m_age(age)
	, m_name(name)
	, m_gender(gender)
{}

//Destruktor
CPerson::~CPerson()
{
}





int CPerson::GetAge()
{
	return this->m_age;
}

void CPerson::SetAge(int _newAge)
{
	this->m_age = _newAge;
}

std::string CPerson::GetName()
{
	return this->m_name;
}
