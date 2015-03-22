#ifndef STOS_H
#define STOS_H
#include <iostream>
#include "Struktury.h"
using namespace std;
/*!
 *\file Definicja klasy Stos
 *
 * Plik zawiera definicje klasy Stos wraz z deklaracjami metod,
 * Jest to klasa pochodna od Struktury 
 */

/*!
 *\brief Modeluje pojecie Stosu
 *
 * Klasa modeluje pojecie Kolejki,
 * dodajac nowy element na jej koniec i sciagajac 
 * ostatnio dodany Wezel
 */
class Stos : public Struktury
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
 *\brief Pole klasy Stos
 * Pole jest wskaznikiem na ostatnio dodany Wezel
 */
	Wezel *Gora;
/*!
 *\brief Pole klasy Stos
 *Pole przechowuje informacje o ilosci wezlow
 */
	unsigned int _Ilosc;	
public:
/*!
 *\brief Metoda dodajaca nowy Wezel
 *
 * Metoda ma za zadanie dodac nowy wezel na koniec ,
 * umiescic w nim warosc zadana jako argument oraz pokazac 
 * wskaznkiem na ostatni Wezel przed dodaniem nowego Wezla
 *\param[in] k - Wartosc ktora zostanie umieszczona w odpowiednim
 * polu Wezla
 */
	void _Push(int k,unsigned int Pozycja = 0);
/*!
 *\brief Metda usuwajaca wezel
 *
 *Metoda ma za zadanie zdjac ostatnio dodany element ze stosu danych
 */
  	int _Pop(unsigned int Pozycja = 0);
/*!
 *\brief Metoda informujaca o obecnej ilosci Wezlow
 *
 * Metoda zwraca informacje o ilosci obecnie 
 * znajdujacych sie elementow na stosie
 *\return - Zwraca ilosc elementow na Stosie 
 */
  	unsigned int _Rozmiar(){return _Ilosc;}	
/*!
 *\brief Konstruktor
 *
 * KOnstruktor ma za zadanie ustawic wskaznik na NULL oraz wyzerowac ilosc elmentow 
 * podczas tworzenia obiektu tej klasy
 */
	Stos(){Gora = NULL; _Ilosc = 0;}
/*!
 *\brief Destruktor Obiektu
 * Destruktor przy pomocy funkcji pop usuwa wszystkie elemty ze stosu
 */
	~Stos();
/*!
 *\brief Konstruktor Kopiujacy
 */
	Stos(const Stos &S);
/*!
 *\brief Metoda wyswietlajaca elementy Stosu
 *
 * Metoda ma za zadanie wyswietlic wszsytkie warotsci
 * znajdujace sie na Stosie
 */
	void _Pokaz();	
	void _Zwolnij();
	
};

#endif
