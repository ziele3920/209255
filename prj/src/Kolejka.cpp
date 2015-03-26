#include "Kolejka.h"
/*!
 *\file 
 *\brief Definicje Metod klasy Kolejka
 */
void Kolejka::_Zwolnij()
{
  // cout << "zwalniam";
  Wezel * Temp = _Pierwszy;
  for(unsigned int i= 1; i < _Ilosc-1; ++i)
    {
      Temp = Temp -> _Nast;
      delete _Pierwszy;
      _Pierwszy = Temp;
    }
  _Ilosc = 0;
  }
//************************************************************************************
void Kolejka::_Push(int a,unsigned int Pozycja)
{
  Wezel *Temp = new Wezel;
  if(_Ilosc)
    {
      _Ostatni ->_Nast = Temp;
      Temp-> _Wartosc = a;
      Temp -> _Nast = NULL;
      _Ostatni = Temp;
    }
  else
    {
      _Pierwszy = _Ostatni = Temp;
      Temp -> _Wartosc = a;
      Temp -> _Nast = NULL;
    }
  ++_Ilosc;
}
//**********************************************************************************
int Kolejka::_Pop(unsigned int Pozycja)
{
  Wezel * Temp;
  if(_Ilosc == 0) { cout << "Kolejka pusta!" << endl;exit(1);}
  else
    {
      Temp = _Pierwszy;
      _Pierwszy = _Pierwszy ->_Nast;
      delete Temp;
      --_Ilosc;
    }
}
//*******************************************************************************
void Kolejka::_Pokaz()
{
  Wezel *Temp = _Pierwszy;
  if(_Ilosc == 0){ cout << "Kolejka pusta!" << endl;}
  else
    {
      cout << "Wartosci w kolejce: " << endl;
      while(Temp)
	{
	  cout << Temp -> _Wartosc << endl;
	  Temp = Temp -> _Nast;
	}
    }
}
//**********************************************************************************
Kolejka::~Kolejka()
{
  while(_Pierwszy) 
    _Pop();
}
//**********************************************************************************
