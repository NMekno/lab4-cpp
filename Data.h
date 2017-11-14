#pragma once
#include <iostream>

using namespace std;

class Data
{
private:
	int m_nDzien;
	int m_nMiesiac;
	int m_nRok;
public:
	Data();
	
	int Dzien() const;
	int Miesiac() const;
	int Rok() const;
	void Wypisz() const;
	void Koryguj();
	bool Porownaj(const Data & wzor) const;
	void Wpisz();
	void Ustaw(int d, int m, int r);
};

