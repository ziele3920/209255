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
 * klasa bazowa dla Stosu,Kolejki i Listy.
 */
class Struktury{

/*!
 * \brief Modeluje pojecie wezla
 * Struktura przeznaczona do dziedziczenia dla klas pochodnych, opartych o 
 * dzialanie listy
 */	


public:
/*!
 *\brief Metoda dodajaca kolejny Wezel
 *
 * Metoda ma za zadanie dodac kolejny wezel do naszej struktury 
 * oraz zapisac w nim odpowiednia wartosc.W zaleznosci od implementowanej struktury
 * element bedzie dodawany na poczatku lub na koncu listy.
 *
 *\param[in] k - wartosc typu calkowitnego, ktora bedzie umieszona w wezle
 */
  virtual void _Push(int k,unsigned int Pozycja = 1) = 0;
/*!
 *\brief Metoda usuwajaca Wezel
 *
 * Metoda ma za zadanie usunac wezel i w zaleznosci od implementowanej struktury
 * bedzie to usuwany element z poczatku lub konca listy Wezlow
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
  virtual void _Zwolnij() = 0;

  };
#endif
