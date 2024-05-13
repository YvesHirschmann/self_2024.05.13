#pragma once
#include <string>


struct SPerson
{
	int			m_age;
	std::string m_name;
	char		m_gender;

};


int			GetAge(SPerson*  _Person);
void		SetAge(SPerson*  _Person, int _newAge);

std::string	GetName(SPerson* _Person);