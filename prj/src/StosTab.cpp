#include "StosTab.h"
using namespace std;
/*!
 *\file
 *\brief Zawiera definicje Metod klasy ListaTab
 */
void StosTab::_Zwolnij()
{
  while(_RozmiarL)
      _Pop(1);
}
//**********************************************************************
int StosTab::_Pop(unsigned int Pozycja)
{
  // cout << "RL: " << _RozmiarL << endl;
  // cout << "RT: " << _RozmiarT << endl;
  Pozycja = _RozmiarL;//usuwanie z konca
  if(_RozmiarL == 0)
    { 
      cerr << "Blad! Lista jest pusta!" << endl; 
      exit(1);
    }

  else
    {
      if(_RozmiarT >= 2*_RozmiarL){
      int *Temp = new int[ _RozmiarT =_RozmiarT/2];
       for(unsigned int i = 0;i <_RozmiarL-1; ++i)
	{
	  Temp[i] = _L[i];
	}
       delete [] _L;
       _L = Temp;}
      else{ --_RozmiarL; return _L[_RozmiarL];}
    }
  --_RozmiarL;
}
//***********************************************************************
void StosTab::_Push(int k,unsigned int Pozycja)
{
  Pozycja = _RozmiarL +1; //dodawanie zawsze na koniec
  if(_RozmiarL == 0){ _L[0] = k;}
  else 
    {
      if(_RozmiarT == _RozmiarL){
      int *Temp = new int[_RozmiarT = 2*_RozmiarT];
      Temp[Pozycja-1] = k;
      for(unsigned int i = 0;i <_RozmiarL; ++i)
	{
	  Temp[i] = _L[i];
	}
      delete [] _L;
      _L = Temp;}
      else{_L[_RozmiarL] = k;}
    }
  ++_RozmiarL;
}
//*************************************************************************
StosTab::StosTab()
{
  _L = new int[1];
  _RozmiarL = 0;
  _RozmiarT = 1;
}
//************************************************************************

//************************************************************************
void StosTab::_Pokaz()
{
  if(_RozmiarL == 0)
    cout << "Brak elementow do wyswietlenia" << endl;
  else{
    for(unsigned int i = 0; i < _RozmiarL; ++i)
      cout << _L[i] << endl;
    cout << "\n";
  }
}
//********************************************************

