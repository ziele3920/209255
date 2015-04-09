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
  delete[] _L;
  _L = Temp;
}
//**********************************************************************
void TabListaPod::Zamien(int i, int j) {
  int tymczasowy = _L[i];
  _L[i] = _L[j];
  _L[j] = tymczasowy;
}
//*********************************************************************
void TabListaPod::QSort(const int lewy, const int prawy) {
  int i, j; 
  int pivot = _L[lewy];
  i = lewy;
  j = prawy;
  do {
    while (_L[i] < pivot) ++i;
    while (_L[j] > pivot) --j;
    if (i <= j) {
      Zamien(i, j);
      ++i; --j;
    }
  }while (i<=j);

  if (j > lewy) QSort(lewy, j);
  if (i < prawy) QSort(i, prawy);
}
//**********************************************************************
void TabListaPod::QSortOpt(const int lewy, const int prawy) {
  int i, j; 
  int pivot = _L[MedianaTrzech(lewy, (lewy+prawy)/2, prawy-1)];
  //cout << pivot << endl;
  i = lewy;
  j = prawy;
  do {
    while (_L[i] < pivot) ++i;
    while (_L[j] > pivot) --j;
    if (i <= j) {
      Zamien(i, j);
      ++i; --j;
    }
  }while (i<=j);

  if (j > lewy) QSort(lewy, j);
  if (i < prawy) QSort(i, prawy);
}
//**********************************************************************
int TabListaPod::MedianaTrzech(const int a, const int b, const int c) const {
  if((_L[a] <= _L[b]) && (_L[a] <= _L[c])) 
    if(_L[b] <= _L[c])  return b; 
    else return c;

  if((_L[b] <= _L[a]) && (_L[b] <= _L[c])) 
    if(_L[a] <= _L[c])  return a;
    else return c;
}
//**********************************************************************
void TabListaPod::MergeSort(const int lewy, const int prawy) {
  if(prawy <= lewy) return;
  int srodek = (prawy+lewy)/2;

  MergeSort(lewy, srodek);
  MergeSort(srodek+1, prawy);

  Scal(lewy, srodek, prawy);
}
//**********************************************************************
void TabListaPod::Scal(const int lewy, const int srodek, const int prawy) {
  int i, j;
  int *pom = new int[_RozmiarL];
  for(i = srodek+1; i>lewy; --i)
    pom[i-1] = _L[i-1];

  for(j = srodek; j<prawy; ++j)
    pom[prawy+srodek-j] = _L[j+1];

  for(int k = lewy; k<=prawy; ++k) 
    if(pom[j] < pom[i])
      _L[k]=pom[j--];
    else
      _L[k]=pom[i++];
  delete[] pom;
}

