#include "Data.h"



Data::Data()
	: m_nDzien(1), m_nMiesiac(1), m_nRok(2000)
{
}



int Data::Dzien() const
{
	return m_nDzien;
}


int Data::Miesiac() const
{
	return m_nMiesiac;
}


int Data::Rok() const
{
	return m_nRok;
}


void Data::Wypisz() const
{
	cout << m_nDzien << "-" << m_nMiesiac << "-" << m_nRok << endl;
}


void Data::Koryguj()
{
	if (m_nMiesiac>12) m_nMiesiac = 12;
	else if (m_nMiesiac<1) m_nMiesiac = 1;

	switch (m_nMiesiac)
	{
	case 2: if (m_nRok % 4 == 0 && m_nRok % 400 == 0)
		if (m_nDzien > 29) m_nDzien = 29;
		else
			if (m_nDzien > 28) m_nDzien = 28;
		if (m_nDzien < 1) m_nDzien = 1;
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: if (m_nDzien > 31) m_nDzien = 31;
			 else if (m_nDzien < 1) m_nDzien = 1;
			 break;
	default:
		if (m_nDzien > 30) m_nDzien = 30;
		else if (m_nDzien < 1) m_nDzien = 1;
		break;
	}
}


bool Data::Porownaj(const Data & wzor) const
{
	if (m_nRok > wzor.m_nRok)
		return 1;
	if (m_nRok < wzor.m_nRok)
		return -1;
	if (m_nRok == wzor.m_nRok)
	{
		if(m_nMiesiac > wzor.m_nMiesiac)
			return 1;
		if (m_nMiesiac < wzor.m_nMiesiac)
			return -1;
		if (m_nMiesiac == wzor.m_nMiesiac)
		{
			if (m_nDzien > wzor.m_nDzien)
				return 1;
			if (m_nDzien < wzor.m_nDzien)
				return -1;
			if (m_nDzien == wzor.m_nDzien)
			{
				return 0;
			}
		}
	}
}


void Data::Wpisz()
{
	cout << "Podaj dzien: ";
	cin >> m_nDzien;
	cout << "Podaj miesiac: ";
	cin >> m_nMiesiac;
	cout << "Podaj rok: ";
	cin >> m_nRok;
}


void Data::Ustaw(int d, int m, int r)
{
	m_nDzien = d;
	m_nMiesiac = m;
	m_nRok = r;
}
