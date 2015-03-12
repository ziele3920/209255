#include "Wektor.h"

/*!
 * \file
 * \brief Plik glowny programu
 */

int main()
{
Wektor P(1000000000);
P.odczyt("dane_zad.txt");
P.dzialanie();
return 0;
}
