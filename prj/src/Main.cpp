#include"Lista.h"
#include"Stos.h"
#include"Kolejka.h"
#include"StrukturyBenchmark.h"
#define ILOSC_DANYCH 100000000
/*!
 *\file
 *\brief funkcja glowna programu
 */
int main(int argc,char *argv[])
{
  
  StrukturyBenchmark K;
  Kolejka k;
  Stos S;
  Lista L;
 

 
  if(argc < 2)
    {
      cout << "Nieprawidlowe wywolanie programu!"
	   << "\nWywolanie: ./Struktury [-ilosc powtorzen testow] [-nazw pliku z danymi]"
	   << endl;
    }
  else if(argv[2] == NULL)
    {
    cout << "Nie podano pliku z baza danych." << endl;
    cout << "Zostanie on wygenerowany przez program" << endl;
    K._Generator("dat3.dat",ILOSC_DANYCH);
     K._Wczytaj("dat3.dat",ILOSC_DANYCH);
     K._WykonajTest(atoi(argv[1]));
    }
  else
    {
      cout << "\nTestuje Liste" << endl;
      K._Ustaw(L);
      K._Wczytaj(argv[2],ILOSC_DANYCH);
      K._WykonajTest(atoi(argv[1]));
      cout << "\nTestuje Stos" << endl;
      K._Ustaw(S);
      K._WykonajTest(atoi(argv[1]));
      cout << "\nTestuje Kolejke" << endl;
      K._Ustaw(k);
      K._WykonajTest(atoi(argv[1]));
    }
 
  return 0;
}
