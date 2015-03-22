#ifndef LISTATAB_H
#define LISTATAB_H
#include <cstdlib>
#include <iostream>
#include "Struktury.h"

class ListaTab : public Struktury
{
private:
	int * _L;
	unsigned int _RozmiarL;
	unsigned int _RozmiarT;	
public:
	ListaTab();
	//ListaTab(ListaTab &L);
	//void ZwiekszPamiec();
	//void ZwiekszPamiecProcent(unsigned int Procent);
	int _Pop(unsigned int Pozycja);
	void _Push(int k,unsigned  int Pozycja);
	unsigned int _Rozmiar(){return _RozmiarL;}
	void _Pokaz();
	//~ListaTab(){delete [] _L;};
	void _Zwolnij();
//	void _Push2(
};
#endif
