#ifndef KOLEJKA_H
#define KOLEJKA_H
#include <iostream>
#include <cstdlib>
#include "Struktury.h"
using namespace std;

/*!
 *\file Definicja klasy Kolejka
 *
 * Plik zawiera definicje klasy Kolejka,
 * Jest to klasa pochodna od Struktury 
 */

/*!
 *\brief Modeluje pojecie Kolejki
 *
 * Klasa modeluje pojecie kolejki,
 * dodajac nowy element na jej koniec i sciagajac 
 * pierwszy doddany element
 */
class Kolejka : public Struktury
{
private:
struct Wezel{
/*!
 *\brief Pole Wezla
 * Pole bedace wskaznikiem na kolejny element listy
 */
	Wezel *_Nast;
/*!\brief Pole Wezla
 * Pole przechowuje wartoc typu calkowitego
 */
	int _Wartosc;
};
/*!
 *\brief Pole klasy Kolejka
 *
 * Pole jest wskaznikiem na pierwszy element kolejki
 */
	Wezel *_Pierwszy;
/*!
 *\brief Pole klasy Kolejka
 *
 * Pole jest wskaznikiem na ostatni element kolejki
 */
	Wezel *_Ostatni;
/*!
 *\brief Pole klasy Kolejka
 *
 *Pole przechowuje inrofmracje o ilosci obecnie znajdujacych sie
 * elementow w kolejce
 */
	unsigned int _Ilosc;
public:
/*!
 *\brief Konstruktor
 *
 * Ustawia wskazniki na NULL oraz zeruje ilosc elementow 
 * przy tworzeniu obiektow danej klasy
 */
	Kolejka(){_Pierwszy = _Ostatni = NULL;_Ilosc = 0;}
/*!
 * \brief Destruktor
*/
	~Kolejka();
/*!
 *\brief Metoda wyswietlajaca elementu Kolejki
 *
 * Metoda ma za zadanie wyswietlic wszsytkie warotsci
 * znajdujace sie w kolejce
 */
	void _Pokaz();
/*!
 *\brief Metoda dodajaca nowy Wezel
 *
 * Metoda ma za zadanie dodac nowy wezel na koniec kolejki,
 * umiescic w nim warosc zadana jako argument oraz pokazac 
 * wskaznkiem na ostatni Wezel przed dodaniem nowego Wezla
 *\param[in] k - Wartosc ktora zostanie umieszczona w odpowiednim
 * polu Wezla
 */
	void _Push(int k,unsigned int Pozycja = 0);
/*!
 *\brief Metda usuwajaca wezel
 *
 *Metoda ma za zadanie usunac pierwszy dodany element z kolejki
 * oraz ustawic wskaznik przed ostatniego elementu na NULL
 */
  	int _Pop(unsigned int Pozycja = 0);
/*!
 *\brief Metoda informujaca o obecnej ilosci Wezlow
 *
 * Metoda zwraca informacje o ilosci obecnie 
 * znajdujacych sie elementow w kolejce
 *\return - Zwraca ilosc elementow w kolejce 
 */
  	unsigned int _Rozmiar(){return _Ilosc;}
	void _Zwolnij();
	
};


#endif
