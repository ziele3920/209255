#include "TabListaPod.h"
/*!
 *\file
 *\brief Definicje Metod Klasy TabListaPod
 */
using namespace std;
//*********************************************************************
TabListaPod::TabListaPod(const TabListaPod & K)
{
  _L = new int[K._RozmiarL];
  for(unsigned int i = 0;i < K._RozmiarL; ++i)
    _L[i] = K._L[i];
}
//*********************************************************************
void TabListaPod::_Zwolnij()
{
  while(_RozmiarL)
      _Pop(1);
}
//*********************************************************************
void TabListaPod::_Push(int k,unsigned  int Pozycja)
{ 
  if(_RozmiarL == 0){ _L[0] = k;}
  else if(Pozycja < 0 || Pozycja > _RozmiarL+1)
    {
      cerr << "Blad! Podano bledny numer pozycji do dodania!" << endl;
      exit(1);
    }
  else
    { 
      if(_RozmiarT == _RozmiarL)
	{
	  _XRozszerz(2,Pozycja,k);
	}
      else {_XRozszerz(1,Pozycja,k);}
    }
  ++_RozmiarL;
 
}   
//*********************************************************************
TabListaPod::TabListaPod()
{
  _L = new int[1];
  _RozmiarL = 0;
  _RozmiarT = 1;
}
//*********************************************************************
void TabListaPod::_Pokaz()
{
  if(_RozmiarL == 0)
    cout << "Brak elementow do wyswietlenia" << endl;
  else{
    for(unsigned int i = 0; i < _RozmiarL; ++i)
      cout << _L[i] << endl;
    cout << " ";
  }
}
//*********************************************************************
int TabListaPod::_Pop(unsigned int Pozycja)
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
      if(_RozmiarT >= 2*_RozmiarL)
	{
	  _XRozszerz(0.5,Pozycja);
	}
      else
	{
	  _XRozszerz(1,Pozycja);
	}
    }
  --_RozmiarL;
}
//***********************************************************************
void TabListaPod:: _XRozszerz(const double Ile,unsigned int Pozycja, int k)
{
  int *Temp = new int[_RozmiarT = Ile * _RozmiarT];
  Temp[Pozycja-1] = k;
  for(unsigned int i = 0;i <_RozmiarL; ++i)
    {
      if(i < Pozycja-1){Temp[i] = _L[i];}
      else{Temp[i+1] = _L[i];}
    }
  delete [] _L;
  _L = Temp;
}
//**********************************************************************
