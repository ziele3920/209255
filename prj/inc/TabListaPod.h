#ifndef TABLISTAPOD_H
#define TABLISTAPOD_H
#include <cstdlib>
#include <iostream>
#include "Struktury.h"
/*!
 *\file Definicja Klasy TabListaPod
 *
 * Plik zawiera definicje klasy Lista,zaimplementowana w sposob tablicowy,realizujacy 
 * realokacje dynamicznej tablicy do 200% poprzedniego rozmiaru.
 * Jest to klasa klasa pochodna od Struktury, naglowke zawiera deklaracje metod 
 */
class TabListaPod : public Struktury
{
private:
/*!
 *\brief Pole klasy ListaTab
 *
 *Pole zawiera wskaznik na typ calkowity, sluzy do alokacji pamieci na dynamiczna tablice
 */
	int *_L;
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

/*!
 * \brief
 * Zamienia miejscami elementy Listy
 *
 * Zamienia miejscami elementy Listy o zadanych indeksach
 *
 * \param[in] i - pierwszy indeks
 * \param[in] j - drugi indeks
 */
	void Zamien(int i, int j);

/*!
 * \brief
 * Znajduje mediane
 *
 * Znajduje mediane wartości z trzech podanych elementów Listy
 *
 * \param[in] a - indeks pierwszego elementu do liczenia mediany
 * \param[in] b - indeks drugiego elementu do liczenia mediany
 * \param[in] c - indeks trzeciego elementu do liczenia mediany
 *
 * \retval - zwraca indeks elementu będącego medianą z trzech wartości podanych elementów
 */
	int MedianaTrzech(const int a, const int b, const int c) const;

/*!
 * \brief
 * "Scala" Listę
 *
 * "Scala" listę w posortowaną całość.
 *
 * \param[in] lewy - indeks lewej krawędzi listy
 * \param[in] srodek - indeks środkowego elementu listy
 * \param[in] prawy - indekst prawej krawędzi listy
 */
	void Scal(const int lewy, const  int srodek, const int prawy); 
public:

/*!
 * \brief
 * Szybkie sortowanie
 *
 * Realizuje algorytm szybkiego sortowania elementów Listy
 *
 * \param[in] lewy - indeks pierwszego elementu tworzącego Listę do posotrowania
 * \param[in] prawy - indeks ostatniego elementu tworzącego Listę do posotrowania
 */
	void QSort(const int lewy, const int prawy);

/*!
 * \brief
 * Zoptymalizowane Szybkie Sortowanie
 *
 * Realizuje zoptymalizowany ze względu na wybór pivota algorytm
 * szybkiego sortowania elementów Listy
 *
 * \param[in] lewy - indeks pierwszego elementu tworzącego Listę do posotrowania
 * \param[in] prawy - indeks ostatniego elementu tworzącego Listę do posotrowania
 */
	void QSortOpt(const int lewy, const int prawy);

/*!
 * \brief
 * Sortowanie przez scalanie
 *
 * Realizuje algorytm sortowania przez scalanie
 *
 * \param[in] lewy - lewa krawędź Listy
 * \param[in] prawy - prawa krawędź Listy
 * \param[in] pom - wkaźnik na tablicę pomocniczą, musi być wielkosci
 * conajmniej takiej jak ilośc lementów do posortowania
 */
	void MergeSort(const int lewy, const int prawy);

/*!
 *\brief Konstruktor Kopiujacy
 */
	TabListaPod(const TabListaPod & K); 

/*!
 *\brief Konstruktor
 *Podczas tworzenia obiektu tej klasy automatycznie alokowana jest tablica o rozmiarze 1
 * oraz ustawienie obecnej liczby elementow listy na 0
 */
	TabListaPod();
/*!
 *\brief Destruktor obiektu
 */
	~TabListaPod(){delete [] _L;}
/*!
 *\brief Metoda scigajaca element z listy
 *Metoda sciagnac element i w przypadku ,gdy rozmiar tablicy bedzie 
 * dwuktornie wiekszy od ilosci elementow, zostanie zalokowana nowa 
 * tablica o zmniejszonym dwukrotnie rozmiarze
 *
 *\param[in] Pozycja - numer elementu ktory zostanie zwrocony z listy
 *
 *\return
 * Zwraca wartosc elementu z zadanej pozycji
 */
	int _Pop(unsigned int Pozycja);
/*!
 *\brief Dodaje element do listy
 *
 * Metoda ma za zadanie dodac element do listy.
 * W przypaku, gdy skonczy sie miejsce w tablicy,zostaje wowczas
 * alokowana nowa tablica o dwukrotnie wiekszym rozmiarze,
 * w inny przypadku element zostaje dodany w miejscu zadanym
 * przez uzytkownika poprzez argument metody
 *
 *\param[in] k - Wartosc jaka chcemy umiescic na liscie
 *\param[in] Pozycja - Pozycja na ktorej chcemy dodac element
 */
	void _Push(int k,unsigned  int Pozycja);
/*!
 *\brief Metoda zwracajaca rozmiar Listy
 *
 * Metoda ma za zadanie zwrocic informacje o aktualnej ilosci
 * elementow na liscie
 *
 *\return
 * Liczba elementow listy
 */
	unsigned int _Rozmiar(){return _RozmiarL;}
/*!
 *\brief Metoda wypisujaca elemeny listy
 *
 *Metoda ma za zadanie wypisac wszystkie elementy znajdujace sie obecnie 
 * na liscie danych
 */
	void _Pokaz();
/*!
 *\brie Metoda zwalniajaca pamiec
 *
 *Metoda ma za zadanie zwolnij pamiec zajmowana przez dane, dopoki ilosc elementow listy nie wynosi
 * 0 wykonywana jest metoda _Pop, aby oproznic stos i zwolnic pamiec
 */
 	
	void _Zwolnij();

	void _XRozszerz(const double Ile,unsigned int Pozycja, int k=0);

	
};
#endif
