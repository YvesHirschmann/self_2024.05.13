#pragma once
#include <string>

//	1. Konstruktor			 -> Startwert f�r die Instanz
//	2. Initialize			 -> Ressourcen erstellen
//	2. Finalizer			 -> Letzte Chance f�r die Instanz
//	1. Destruktor			 -> Aufr�umen der Instanz


class CPerson
{
public:
	//Konstruktor	
		//Standardkonstruktor: 
			CPerson(int age, std::string name, char gender);
			
		//Kopierkonstruktor: 
			//CPerson(const CPerson& _rPerson);

		//Operator�berladung: (�berschreibt eine Instanz)
			//CPerson& operator =(const CPerson& _rPerson);
		


	//Destruktor
			~CPerson();
			

private:
		int			m_age;
		std::string m_name;
		char		m_gender;


public:
		int			GetAge ();
		void		SetAge (int _newAge);
		std::string	GetName();



};