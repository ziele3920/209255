#ifndef LISTATAB_H
#define LISTATAB_H
#include <cstdlib>
#include <iostream>
#include "Struktury.h"
/*!
 *\file Definicja Klasy ListaTab
 *
 * Plik zawiera definicje klasy Lista,zaimplementowana w sposob tablicowy,realizujacy 
 * realokacje dynamicznej tablicy każdorazowo o 1 w momencie dodawania elementu od niej.
 * Jest to klasa klasa pochodna od Struktury, naglowke zawiera deklaracje metod 
 */
class ListaTab : public Struktury
{
private:
/*!
 *\brief Pole klasy ListaTab
 *
 *Pole zawiera wskaznik na typ calkowity, sluzy do alokacji pamieci na dynamiczna tablice
 */
	int * _L;
/*!
 *\brief Pole Klasy ListaTab
 *
 *Pole przechowuje informacje o ilosci obecnie znajdujacych sie elementow na liscie danych
 */
	unsigned int _RozmiarL;
/*!
 *\brief Pole Klasy ListaTab
 *
 *Pole przechowuje informacje o obecnycm rozmiarze tablicy danych
 */
	unsigned int _RozmiarT;	
public:
/*!
 *\brief Konstruktor
 *Podczas tworzenia obiektu tej klasy automatycznie alokowana jest tablica o rozmiarze 1
 * oraz ustawienie obecnej liczby elementow listy na 0
 */
	ListaTab();
/*!
 *\brief Konstruktor Kopiujacy
 */
	//ListaTab(ListaTab &L);
/*!
 *\brief Destruktor obiektu
 */
	~ListaTab(){delete [] _L;};	
/*!
 *\brief Metoda wypisujaca elemeny listy
 *
 *Metoda ma za zadanie wypisac wszystkie elementy znajdujace sie obecnie 
 * na liscie danych
 */
	void _Pokaz();
/*!
 *\brief Metoda sciagajaca element z listy
 *
 * Metoda ma za zadanie sciagnac wybrany przez uzytkownika element listy oraz 
 * kazdorazowa zmniejszyc tablice z danymi o 1 oraz przekopiowac pozostale elementy listy
 *
 *\param[in] Pozycja - numer elementy kotry zostanie usuniety z listy i zostanie zwrocona jego 
 * wartosc
 *
 *\return
 * Zwraca wybrany przez uzytkownika element
 */
	int _Pop(unsigned int Pozycja);
/*!
 *\brief Metoda dodajaca elemet do tablicy
 *
 * Metoda ma za zadanie dodac nowy element w wybranym przez uzytkownika miejscu oraz zwiekszyc 
 * kazdorazowa tablice danych o 1 i przepisac pozostale elementy do nowej
 *
 *\param[in] k - wartosc jaka chcemy dodac do listy
 *\param[in] Pozycja - Pozycja na ktorej chcemy dodac wartosc
 */
	void _Push(int k,unsigned  int Pozycja);
/*!
 *\brief Metoda zwracajaca rozmiar listy
 * 
 * Metoda zwraca informacje o obecnej ilosci danych w strukturze 
 *
 *\return 
 * Zwraca ilosc elementow listy
 */
	unsigned int _Rozmiar(){return _RozmiarL;}
/*!
 *\brie Metoda zwalniajaca pamiec
 *
 *Metoda ma za zadanie zwolnij pamiec zajmowana przez dane, dopoki ilosc elementow listy nie wynosi
 * 0 wykonywana jest metoda _Pop, aby oproznic stos i zwolnic pamiec
 */
 
	void _Zwolnij();

};
#endif
