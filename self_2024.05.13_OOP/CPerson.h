#pragma once
#include <string>

//	1. Konstruktor			 -> Startwert für die Instanz
//	2. Initialize			 -> Ressourcen erstellen
//	2. Finalizer			 -> Letzte Chance für die Instanz
//	1. Destruktor			 -> Aufräumen der Instanz


class CPerson
{
public:
	//Konstruktor	
		//Standardkonstruktor: 
			CPerson(int age, std::string name, char gender);
			
		//Kopierkonstruktor: 
			//CPerson(const CPerson& _rPerson);

		//Operatorüberladung: (Überschreibt eine Instanz)
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