#include "StrukturyBenchmark.h"
/*!
 *\file
 *\brief Definicje metod klasy StrukturyBenchmark
 */

//************************************************************************
void::StrukturyBenchmark::_Zwolnij(const unsigned int n)
{
 S -> _Zwolnij();
 }
//***************************************************************************
void StrukturyBenchmark::_Przydziel(const unsigned int n)
{
  W = new int [n];
  for(unsigned int i = 0; i < n; ++i)
    W[i] = 0;
}
//*****************************************************************************
void StrukturyBenchmark::_Test(const unsigned int n)
{

  S -> QSortOpt(0, (S -> _Rozmiar()-1));
;
}
//*****************************************************************************
void StrukturyBenchmark:: _Wczytaj(string PlikIn,const unsigned int Ilosc)
{
  ifstream Plik_in;
  int w;
  _Przydziel(Ilosc);
  Plik_in.open(PlikIn.c_str(),ios::in);
    if(!Plik_in)
    {
        cerr << "Blad przy otwieraniu Pliku: " << PlikIn << endl;
    }
    else
    {
      for(unsigned int i = 0; i< Ilosc; ++i)
	{
	  //Plik_in >> W[i];
	  Plik_in >> w;
	  S -> _Push(w, S->_Rozmiar());
	  if(Plik_in.eof())
	    {
	      cout << "Napotkany EOF przed wczytaniem wszytskich danych" << endl;
	    }
	}
    }
    Plik_in.close();
}
//*****************************************************************************

