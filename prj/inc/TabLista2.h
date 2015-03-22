#ifndef LISTATAB_H
#define LISTATAB_H
#include <cstdlib>
#include <iostream>
#include "Struktury.h"

class TabLista2 : public Struktury
{
private:
	int * _L;
	unsigned int _RozmiarL;
	unsigned int _RozmiarT;	
public:
	TabLista2(){_L = NULL, _RozmiarL = _RozmiarT = 0;;
	//TabLista2(ListaTab &L);
	int _Pop(unsigned int Pozycja);
	void _Push(int k,unsigned  int Pozycja);
	unsigned int _Rozmiar(){return _RozmiarL;}
	void _Pokaz();
	~ListaTab(){delete [] _L;};
};
#endif
