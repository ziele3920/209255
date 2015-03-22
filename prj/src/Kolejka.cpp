#include "Kolejka.h"
/*!
 *\file 
 *\brief Definicje Metod klasy Kolejka
 */

//************************************************************************************
void Kolejka::Push(int a)
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
void Kolejka::Pop()
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
void Kolejka::Pokaz()
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
    Pop();
}
//**********************************************************************************
