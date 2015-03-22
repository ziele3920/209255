
#include "Lista.h"
/*!
 *\file
 *\brief Definicje Metod klasy Lista
 */
//**************************************************************************
void Lista::Pop_Dowolny(int Pozycja) 
{
  Wezel* Temp = Glowa; 
  if(Pozycja == 1)
    { 
      delete Glowa; 
      Glowa = Temp -> _Nast;
    }
  else
    { 
      for(int i = 1; i < (Pozycja-1); ++i) { Temp = Temp -> _Nast;} 
      if(Temp -> _Nast -> _Nast == NULL)
	{ 
	  delete Temp -> _Nast; 
	  Temp -> _Nast = NULL; 
	}
      else
	{ //cout << tmp->nastepny->wartint << endl;
	  delete Temp -> _Nast; //cout << tmp->nastepny->wartint << endl; 
	  Temp -> _Nast = Temp -> _Nast -> _Nast; 
	} 
    } 
   --_Ilosc;
}
//**************************************************************************
void Lista::Push_Dowolny(int Wart, int Poz) 
{ 
  Wezel *Nowy = new Wezel; 
  Wezel *Stary; 
  Wezel *Temp = Glowa; 
  Nowy->_Wartosc = Wart; 
  int nr = Rozmiar(); 
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
	  for(int i = 1; i < (Poz-1); ++i) { Temp = Temp->_Nast; } 
	  Stary = Temp->_Nast; 
	  Temp->_Nast = Nowy; 
	  Temp->_Nast->_Nast = Stary; 
	}
    } 
  ++_Ilosc;
}
//**************************************************************************

//************************************************************************
void Lista::Pokaz()
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
Lista::Lista(const Lista &A)
{
  Wezel *W = A.Glowa;
  while(W)
    {
      Push(W->_Wartosc);
    }
}
//*************************************************************************
void Lista::Push(int a)
{
  Wezel *Temp = new Wezel;
  Temp -> _Nast = Glowa;
  Temp -> _Wartosc = a;
  Glowa = Temp;
  ++_Ilosc;
}
//************************************************************************
void Lista::Pop()
{
   Wezel * Temp = Glowa;
    if(Temp)
      {
	  Glowa = Temp -> _Nast;
	  delete Temp;
      }
      --_Ilosc;
  
}
//**********************************************************************      

