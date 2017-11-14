#include "Napis.h"



Napis::Napis()
{
}




const char* Napis::Zwroc() const
{
	return m_pszNapis;
}


void Napis::Ustaw(const char* nowy_napis)
{
	for (auto &i : m_pszNapis)
	{
		m_pszNapis[i] = nowy_napis[i];
	}
}


void Napis::Wypisz() const
{
	cout << m_pszNapis;
}


void Napis::Wpisz()
{
	cin >> m_pszNapis;
}


int Napis::SprawdzNapis(const char* por_napis) const
{
	char* napis = const_cast<char*>(por_napis);
	char* napisOrg = const_cast<char*>(m_pszNapis);
	for (auto &i : m_pszNapis)
	{
		try
		{
			if (napis[i] < 'a')
				napis[i] += 32;
			if (napisOrg[i] < 'a')
				napisOrg[i] += 32;
			if (napis[i] > napisOrg[i])
				return -1;
			if (napis[i] < napisOrg[i])
				return 1;
		}
		catch (const std::exception&)
		{
			cout << "Napisy podobne, ale por_napis jest krótszy";
		}		
	}

	return 0;
}
