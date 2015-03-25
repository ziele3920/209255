#include "Stos.h"
using namespace std;
/*!
 *\file
 *\brief Definicje metod klasy Stos
 */
void Stos::_Zwolnij()
{
  // cout << "zwalniam";
  Wezel * Temp = Gora;
  for(unsigned int i= 0; i < _Ilosc; ++i)
    {
      // cout << "\ncheck1" << endl;
      Temp = Temp -> _Nast;
      delete Gora;
      Gora = Temp;
    }
  _Ilosc = 0;
  }
//**************************************************************************

//**************************************************************************
Stos::~Stos()
{
while(Gora)
    {
      _Pop();
    }
}
//******************************************************************************
void Stos::_Push(int k,unsigned int Pozycja)
{
  Wezel *W = new Wezel;
  W ->_Wartosc = k;
  W ->_Nast = Gora;
  Gora = W;
  ++_Ilosc;
}
//******************************************************************************
int Stos::_Pop(unsigned int Pozycja)
{
  Wezel *W = Gora;
  int Temp;
  if(!Gora) cout << "Stos jest Pusty!" << endl;
  else
    {
      Gora = Gora -> _Nast;
      Temp = W->_Wartosc;
      delete W;
    }
  --_Ilosc;

}
//*******************************************************************************
void Stos::_Pokaz()
{
  Wezel *W = Gora;
  if(!Gora) {cout << "Stos jest pusty" << endl;}
  else
    {
      cout << "Wartosc na stosie: " << endl ;
      while(W)
	{
	  cout << W->_Wartosc << endl;
	  W = W -> _Nast;
	}
    }
}
//******************************************************************************
