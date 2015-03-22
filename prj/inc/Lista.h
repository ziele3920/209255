#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "Struktury.h"

/*!
 *\file Definicja Klasy Lista
 *
 * Plik zawiera definicje klasy Lista,bedaca klasa pochodna od Struktury, wraz z deklaracjami metod
 */

class Lista : public Struktury
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
 *\brief Pole klasy Lista
 *Wskaznik na nowo dodany Wezel
 */
	Wezel *Glowa;
/*!
 *\brief Pole klasy Lista
 * Pole przechowuje bierzaca ilosc elementow listy 
 */
	unsigned int _Ilosc;
public:
/*!
 *\brief Metoda dodajaca Wezel
 *
 * Metoda ma za zadanie dodac element do listy w zaleznosci od argumentu miejscu 
 * i usatwic wartosc zadana przez argument
 *\param[in] wart - Wartosc jaka zostana dodana do Wezla 
 *\param[in] poz - Pozycja w ktorej zosatnie dodany Wezel
 */
	void _Push(int wart,unsigned int poz = 1);	
/*!
 *\brief Metoda usuwajaca Wezel
 * 
 *Metoda ma za zadanie usunac wezel zgodny z argumentem metody
 *Wezel zosatnie usuniety, a sasiednie elementy zostana polaczaone wskazniekiem
 *
 *\param[in] Pozycja - Numer Wezla ktory zostanie usuniety
 */
	int _Pop(unsigned int Pozycja = 1);
/*!
 *\brief Metoda dodajaca wezel
 * 
 * Metoda ma za zadanie dodac element na poczatek listy
 *\param[in] k - Wartosc ktora bedzie zapisana w Wezle 
 */
	//void _Push(int k,unsigned int Pozycja=0);
/*!
 * Metoda usuwajaca Wezel
 *
 *Metoda ma za zadanie usunac pierwszy Wezel listy
 */
  	//int _Pop(unsigned int Pozycja=0);
/*!
 *\brief Metoda informujaca o ilosci wezlow
 *
 *Metoda zwraca informajce o ilosci aktualnych wezlow listy
 *\return - Ilosc elementow listy
 */
  	unsigned int _Rozmiar(){return _Ilosc;}
/*!
 *\brief Konstruktor
 *
 * Konstruktor ustawia wskaznik na NULL i zeruje ilosc wezlow listy
 */
	Lista(){Glowa = NULL;_Ilosc = 0;}
/*!
 *\brief Destruktor 
 *Usuwa wskaznik
 */
	~Lista(){delete Glowa;}
/*!
 *\brief Konstruktor Kopiujacy
 */
	//Lista(const Lista &A);
/*!
 *\brief Metoda wyswietlajaca elementy Listy
 *
 * Metoda ma za zadanie wyswietlic wszsytkie warotsci
 * znajdujace sie na Liscie
 */
	void _Pokaz();	
	void _Zwolnij();


};
#endif
