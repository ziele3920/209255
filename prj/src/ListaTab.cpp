#include "ListaTab.h"
using namespace std;
void ListaTab::_Zwolnij()
{
for(unsigned int i =0; i < _RozmiarT; ++i)
    {
      _Pop(1);
    }
  
}
//**********************************************************************
int ListaTab::_Pop(unsigned int Pozycja)
{
  if(_RozmiarL == 0)
    { 
      cerr << "Blad! Lista jest pusta!" << endl; 
      exit(1);
    }
  else if(Pozycja < 0 || Pozycja > _RozmiarL)
    {
      cerr << "Blad! Podano bledny numer pozycji do usuniecia!" << endl;
      exit(1);
    }
  else
    {
      int *Temp = new int[ _RozmiarL-1];
       for(unsigned int i = 0;i <_RozmiarL-1; ++i)
	{
	  if(i < Pozycja-1){Temp[i] = _L[i];}
	  else{Temp[i] = _L[i+1];}
	  // return 0;
	}
       delete [] _L;
       _L = Temp;
    }
  --_RozmiarL;
  return 0;
}
//***********************************************************************
void ListaTab::_Push(int k,unsigned int Pozycja)
{
  if(_RozmiarL == 0){ _L[0] = k;}
  else if(Pozycja < 0 || Pozycja > _RozmiarL+1)
    {
      cerr << "Blad! Podano bledny numer pozycji do dodania!" << endl;
      exit(1);
    }
  else 
    {
      int *Temp = new int[_RozmiarT = _RozmiarL+1];
      Temp[Pozycja-1] = k;
      for(unsigned int i = 0;i <_RozmiarL; ++i)
	{
	  if(i < Pozycja-1){Temp[i] = _L[i];}
	  else{Temp[i+1] = _L[i];}
	}
      delete [] _L;
      _L = Temp;
    }
  ++_RozmiarL;
}
//*************************************************************************
ListaTab::ListaTab()
{
  _L = new int[1];
  _RozmiarL = 0;}
//************************************************************************
/*
ListaTab::ListaTab(ListaTab &K)
{;}
****************************************************/
//************************************************************************
void ListaTab::_Pokaz()
{
  if(_RozmiarL == 0)
    cout << "Brak elementow do wyswietlenia" << endl;
  else{
    for(unsigned int i = 0; i < _RozmiarL; ++i)
      cout << _L[i] << endl;
    cout << "\n";
  }
}
//************************************************************************
