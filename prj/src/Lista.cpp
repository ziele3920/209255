
#include "Lista.h"
/*!
 *\file
 *\brief Definicje Metod klasy Lista
 */
using namespace std;

void Lista::_Zwolnij()
{
  // cout << "zwalniam" << endl;
  Wezel * Temp = Glowa;
  for(unsigned int i= 1; i < _Ilosc-1; ++i)
    {
      Temp = Temp -> _Nast;
      delete Glowa;
      Glowa = Temp;
    }
  _Ilosc = 0;
  }
//*************************************************************************
int Lista::_Pop(unsigned int Pozycja) 
{
  //Pozycja = _Ilosc;
  Wezel* Temp = Glowa; 
  Wezel * Temp2;
  if(Pozycja == 1)
    { 
     Wezel * T = Glowa -> _Nast;
      delete Glowa; 
      Glowa = T;
    }
 
  else 
    {   
      // cout << "checkpoint1" << endl;
      for(unsigned int i = 1; i < (Pozycja-1); ++i){
	//	cout << "checkpoint1.1" << endl; 
	Temp = Temp -> _Nast; }
      if(Temp -> _Nast -> _Nast == NULL)
	{ 
	  //   cout << "checkpoint2" << endl;
	  delete Temp -> _Nast; 
	  Temp -> _Nast = NULL; 
	}
      else
	{ 
	  //  cout << "checkpoint3" << endl;
	  Temp2 = Temp ->_Nast;
	  Temp -> _Nast = Temp2 -> _Nast;
	  delete Temp2;
	}
    }

   --_Ilosc;
}

//**************************************************************************
void Lista::_Push(int Wart,unsigned int Poz) 
{ 
  //Poz = _Ilosc + 1;
  Wezel *Nowy = new Wezel; 
  Wezel *Stary; 
  Wezel *Temp = Glowa; 
  Nowy->_Wartosc = Wart; 
  unsigned int nr = _Rozmiar(); 
  if(Poz>(nr)) Poz = nr+1;
  if(!Glowa){ Glowa = Nowy; }
  else
    { 
      if(Poz <= 1)
	{
	  Stary = Glowa;
	  Glowa = Nowy; 
	  Glowa->_Nast = Stary; 
	}
      else
	{ 
	  for(unsigned int i = 1; i < (Poz-1); ++i) { Temp = Temp->_Nast; } 
	  Stary = Temp->_Nast; 
	  Temp->_Nast = Nowy; 
	  Temp->_Nast->_Nast = Stary; 
	}
    } 
  ++_Ilosc;
  }
//**************************************************************************

//************************************************************************
void Lista::_Pokaz()
{
  Wezel * Temp = Glowa;
  if(_Ilosc == 0) { cout << "Lista pusta!" << endl;}
  else
    {
      cout << "Wartosc listy: " << endl;
      while(Temp)
	{
	  cout << Temp -> _Wartosc << endl;
	  Temp = Temp -> _Nast;
	}
    }
}
//*************************************************************************

//*************************************************************************



