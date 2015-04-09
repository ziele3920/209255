#ifndef INTERFEJS_H
#define INTERFEJS_H
#include <iostream>
#include <cstring>
#include <sstream>
#include <fstream>
/*!
 *\file Definicja klasy Struktury 
 *
 * Plik zawiera definicje klasy Struktry, bedząca klasa 
 * abstrakcyjna i bazowa dla pochodnych Struktur danych.
 * Zawiera deklaracje metod czysto wirtualnych
 */

/*!
 *\brief Modeluje pojecie Struktury danych,
 * klasa bazowa dla Stosu,Kolejki i Listy,zarowno w implemenetacji wskaznikowej 
 * jak i tablicowej
 */
class Struktury{

public:
/*!
 *\brief Metoda dodajaca kolejny element struktury
 *
 * Metoda ma za zadanie dodac kolejny element do naszej struktury 
 * oraz zapisac w nim odpowiednia wartosc.W zaleznosci od implementowanej struktury
 * element bedzie dodawany na poczatku lub na koncu struktury danych.
 *
 *\param[in] k - wartosc typu calkowitnego, ktora bedzie umieszona w strukturze
 */
  virtual void _Push(int k,unsigned int Pozycja = 1) = 0;
/*!
 *\brief Metoda usuwajaca element
 *
 * Metoda ma za zadanie usunac element i w zaleznosci od implementowanej struktury
 * bedzie to usuwany element usuwany z poczatk,końca lub w przypadku listy z dowolnego jej miejsca
 *\param[in] Pozycja - Numer elementu ,ktory zostanie dodany. Argument ma znaczenie tylko w przypadku listy
 * i domyślnie jest ustawiony, tak aby element był dodawany zawsze na poczatku listy
 *\return
 * Zwraca wartosc elementu z odpowiedniego dla wybranej struktury miejsca 
 */
  virtual int _Pop(unsigned int Pozycja = 1 ) = 0;
/*!
 *\brief Metoda zwracajaca rozmiar Struktury
 *
 * Metoda ma zadanie zwrocic bierzaca liczbe elementow nalezacych do danej struktury
 *\return - Bierzaca liczba elementow Struktury danych
 */ 
  virtual unsigned int _Rozmiar() = 0;
/*!
 *\brief Metoda wyswietlajaca dane 
 *
 * Metoda ma za zadanie wyswietlic wszytskie dane nalezace do struktury 
 */
  virtual void _Pokaz() = 0;
/*!
 *\brief Metoda zwalniajaca pamiec
 *
 *Metoda ma za zadanie zwolnic pamiec uzywana przy zapelnienianiu danej struktry danymi
 */
  virtual void _Zwolnij() = 0;

/*!
 * \brief
 * Szybkie sortowanie
 *
 * Realizuje algorytm szybkiego sortowania elementów Struktury
 *
 * \param[in] lewy - indeks pierwszego elementu tworzącego Strukturę do posotrowania
 * \param[in] prawy - indeks ostatniego elementu tworzącego Strukturę do posotrowania
 */
  virtual void QSort(const int lewy, const int prawy) = 0;

/*!
 * \brief
 * Zoptymalizowane Szybkie Sortowanie
 *
 * Realizuje zoptymalizowany ze względu na wybór pivota algorytm
 * szybkiego sortowania elementów Struktury
 *
 * \param[in] lewy - indeks pierwszego elementu tworzącego Strunkturę do posotrowania
 * \param[in] prawy - indeks ostatniego elementu tworzącego Strukturę do posotrowania
 */
  virtual void QSortOpt(const int lewy, const int prawy) = 0;

/*!
 * \brief
 * Sortowanie przez scalanie
 *
 * Realizuje algorytm sortowania przez scalanie
 *
 * \param[in] lewy - lewa krawędź Struktury
 * \param[in] prawy - prawa krawędź Struktury
 * \param[in] pom - wkaźnik na tablicę pomocniczą, musi być wielkosci
 * conajmniej takiej jak ilośc lementów do posortowania
 */
  virtual void MergeSort(const int lewy, const int prawy) = 0;


  };
#endif
