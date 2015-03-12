#include "Wektor.h"
using namespace std;
/*!
 *\file
 *\brief Definicje metod klasy Wektor
 */

//************************************************************
Wektor::Wektor(int Rozmiar)
{
_W = new int [_Rozmiar = Rozmiar];
for(int i = 0 ; i < _Rozmiar; ++i)
    _W[i] = 0;
}
//************************************************************
Wektor::Wektor(Wektor &W)
{
_W = new int[W._Rozmiar];
    for(int i = 0; i < W._Rozmiar; ++i)
        _W[i] = W._W[i];
}

//***************************************************************
bool Wektor::operator = (const Wektor &W)
{
    for(int i = 0; i < _Rozmiar; ++i)
        _W[i] = W._W[i];
    return true;
}
//***************************************************************
void Wektor::zapisz(string Plikout)
{
ofstream Plik_out;
Plik_out.open(Plikout.c_str(),ios::out);
    if(!Plik_out)
    {
        cerr << "Blad utworzenia pliku: "<< Plikout << endl;
    }

    else
        Plik_out << *this;

    Plik_out.close();

}
//***********************************************************************
void Wektor::odczyt(string PlikIn)
{
ifstream Plik_in;
Plik_in.open(PlikIn.c_str(),ios::in);
    if(!Plik_in)
    {
        cerr << "Blad przy otwieraniu Pliku: " << PlikIn << endl;
    }
    else
    {
        Plik_in >> *this;
        if(Plik_in.eof())
        {
            cout << "Napotkany EOF przed wczytaniem wszytskich danych";
        }
    }
    Plik_in.close();
}
//************************************************************************
void Wektor::dzialanie()
{
double tab_wynikow[ILOSC][ILOSC_POW];
clock_t start,koniec;
int Tablica_Rozmiarow[ILOSC] = {1,10,1000,1000000,1000000000};
   for (int i = 0; i < ILOSC; ++i)
   {
      for(int j = 0; j < ILOSC_POW; ++j)
       {
          start = clock();
	  for(int k = 0; k < Tablica_Rozmiarow[i]; ++k)
	    _W[i] *=2;
          koniec = clock();
          tab_wynikow[i][j] = (koniec - start) / (double)
	    (CLOCKS_PER_SEC / 1000);
          cout << tab_wynikow[i][j] << (j == (ILOSC_POW-1) ? "\n": "\t");
        }
    }
}
//*******************************************************************

