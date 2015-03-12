#ifndef INTERFEJS_INCLUDED
#define INTERFEJS_INCLUDED
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <fstream>
#include <time.h>
using namespace std;

/*!
 *\file 
 *\brief Definicja klasy Interfejs
 *
 *Plik zawiera definicje klasy Interfejs wraz z deklaracjami metod 
 *wirtualnych
 */

/*!
 *\brief Modeluje Interfejs
 *
 * Jest klasa czysta abstrakcyjna,bazowa dla Wektora
 */
class Interfejs{
public:
/*!
 *\brief Metoda zapisujaca dane do pliku zewnetrznego
 *
 * Metoda ma za zadanie przekazac zawartosc danych do pliku 
 * zewnetrzego
 * \param[in] PlikOut - Nazwa pliku zewnetrzenego 
 */
virtual void zapisz(string PlikOut) = 0;
/*!
 *\brief Metoda odczytujaca dane z pliku zewnetrzengo 
 *
 * Metoda ma za zadanie odczytac dane z pliku zewnetrzego i 
 * umiescic dane w obiekcie danej klasy 
 *
 * \param[in] PlikIn - Nazwa pliku wejsciowego
 */
virtual void odczyt(string plikIn) = 0 ;
/*!
 *\brief Metoda wykonujaca pewna operacje algebraiczna 
 *
 * Metoda ma za zadanie wykonac na obiekcie danej klasy zaimplementowana w niej operacje 
 * algebraiczna 
 *
 */
virtual void dzialanie() = 0;
    };


#endif // INTERFEJS_INCLUDED
