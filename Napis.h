#pragma once
#include <iostream>
using namespace std;

class Napis
{
public:
	Napis();
private:
	char m_pszNapis[40];
public:
	const char * Zwroc() const;
	void Ustaw(const char* nowy_napis);
	void Wypisz() const;
	void Wpisz();
	int SprawdzNapis(const char* por_napis) const;
	/*
	0 - gdy r�wne polu kt�re zawiera ta klasa
	1 - gdy pole kt�re zawiera ta klasa jest alfabetycznie dalej 
	-1 - gdy pole kt�re zawera ta klasa jest alfabetycznie bli�ej
	*/

};

