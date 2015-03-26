#ifndef STOSTAB_H
#define STOSTAB_H
#include <cstdlib>
#include <iostream>
#include "Struktury.h"
/*!
 *\file Definicja Klasy ListaTab
 *
 * Plik zawiera definicje klasy StosTab,zaimplementowana w sposob tablicowy,realizujacy 
 * realokacje dynamicznej tablicy do 200% poprzedniego rozmiaru w momencie dodawania elementu od niej.
 * Jest to klasa klasa pochodna od Struktury, naglowke zawiera deklaracje metod 
 */
class StosTab : public Struktury
{
private:
/*!
 *\brief Pole klasy StosTab
 *
 *Pole zawiera wskaznik na typ calkowity, sluzy do alokacji pamieci na dynamiczna tablice
 */
	int * _L;
/*!
 *\brief Pole Klasy StosTab
 *
 *Pole przechowuje informacje o ilosci obecnie znajdujacych sie elementow na liscie danych
 */
	unsigned int _RozmiarL;
/*!
 *\brief Pole Klasy StosTab
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
	StosTab();
/*!
 *\brief Konstruktor Kopiujacy
 */
	//ListaTab(ListaTab &L);
/*!
 *\brief Destruktor obiektu
 */
	~StosTab(){delete [] _L;};	
/*!
 *\brief Metoda wypisujaca elemeny Stosu
 *
 *Metoda ma za zadanie wypisac wszystkie elementy znajdujace sie obecnie 
 * na liscie danych
 */
	void _Pokaz();
/*!
 *\brief Metoda sciagajaca element ze stosu
 *
 * Metoda ma za zadanie sciagnac ostatni element stosu, w przypadku gdy tablica jest
 * do połowy pusta nastepuje utworzenie nowej tablicy o dwa razy mniejszym rozmiarze
 *\param[in] Pozycja - numer elementy kotry zostanie usuniety z listy i zostanie zwrocona jego 
 * wartosc
 *
 *\return
 * Zwraca wybrany przez uzytkownika element
 */
	int _Pop(unsigned int Pozycja = 0);
/*!
 *\brief Metoda dodajaca elemet do tablicy
 *
 * Metoda ma za zadanie dodac nowy element na koncu stosu, w przypadku zapelnienia tablicy
 * nastepuje utworzenie nowej tablicy i przepisanie elementow
 *
 *\param[in] k - wartosc jaka chcemy dodac do listy
 *\param[in] Pozycja - Pozycja na ktorej chcemy dodac wartosc
 */
	void _Push(int k,unsigned  int Pozycja = 0);
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
