#include "Stos.h"
using namespace std;
/*!
 *\file
 *\brief Definicje metod klasy Stos
 */

//**************************************************************************
Stos::Stos(const Stos &S)
{
  Gora = NULL;
  Wezel * W = S.Gora;
  while(W)
    {
      this ->Push(W ->_Wartosc);
      W = W->_Nast;
    }
}
//**************************************************************************
Stos::~Stos()
{
while(Gora)
    {
      Pop();
    }
}
//******************************************************************************
void Stos::Push(int k)
{
  Wezel *W = new Wezel;
  W ->_Wartosc = k;
  W ->_Nast = Gora;
  Gora = W;
}
//******************************************************************************
void Stos::Pop()
{
  Wezel *W = Gora;
  int Temp;
  if(!Gora) cout << "Stos jest Pusty!" << endl;
  else
    {
      Gora = Gora -> _Nast;
      Temp = W->_Wartosc;
      delete W;
    }

}
//*******************************************************************************
void Stos::Pokaz()
{
  Wezel *W = Gora;
  if(!Gora) {cout << "Stos jest pusty" << endl;}
  else
    {
      cout << "Wartosc na stosie: " << endl ;
      while(W)
	{
	  cout << W->_Wartosc << endl;
	  W = W -> _Nast;
	}
    }
}
//******************************************************************************
