#ifndef STRUKTURYTABLICE_H
#define STRUKTURYTABLICE_H
#include <iostream>
#include <cstring>
#include <sstream>
#include <fstream>

class StrukturyTablice
{
public:
	virtual void _Push(int k,unsigned int Pozycja = 0) = 0;
	virtual int _Pop(unsigned int Pozycja = 0) = 0;
	virtual void _Pokaz() = 0;
	virtual unsigned int _Rozmiar() = 0;
};
#endif

