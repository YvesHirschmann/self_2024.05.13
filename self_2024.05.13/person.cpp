
#include "person.h"


int GetAge(SPerson* _Person)
{
	return _Person->m_age;
}

void SetAge(SPerson* _Person, int _newAge)
{
	_Person->m_age = _newAge;
}

std::string GetName(SPerson* _Person)
{
	return _Person->m_name;
}
