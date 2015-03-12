#ifndef WEKTOR_H
#define WEKTOR_H
#define ILOSC 5
#define ILOSC_POW 10
#include "Interfejs.h"

/*!
 *\file 
 *\brief Definicja klasy Wektor
 *
 * Klasa modeluje pojecie wektora, bedacego pojemnikiem na dane 
 */

/*!
 *\brief Modeluje pojecie Wektora
 *
 * Klasa modeluje pojecie wektora jako dynamiczna tablice jednowymiarowa
 * zawieracja dane typu calkowitego,jest klasa dziedziczaca od klasy Interfejs
 */ 

class Wektor:public Interfejs
{
private:
/*!
 * \brief Pola Wektora
 *
 * Pole zawiera wskaźnik na int służacy do pokazania 
 * na zaalokowana dynamicznie pamieć
 */
    int *_W;
/*!
 *\brief Pola Wektora
 *
 * pole przechowujące rozmiar Wektora
 */
    int _Rozmiar;
public:
/*!
 * \brief Konstruktor
 * 
 * Konstruktor ma za zadanie pobrać rozmiar
 * oraz zaalokować odpowiednią ilość pamięci
 * dla wektora.
 *
 * \param [in] Rozmiar - Wielkość odpowiadająca podanemu przez 
 *             użytkownuka rozmiarowi układu. Jest używana
 *             do zaalokowania odpowiedniej ilości pamięci
 *             oraz sterowania pętlami
 */
     Wektor(int Rozmiar);
 /*!
  * \brief Konstruktor kopiujący Wektora
  *
  * Konstruktor kopiujący jest niezbędny w przypadku gdy w klasach występują
  * pola wskaźnikowe, gdyż w przypadku gdy posiadamy jedynie konstruktor 
  * kopiujacy automatyczny każdy nowo powstały obiekt jest dokładną kopią 
  * obiektu wzorcowego, gdyż wskaźniki pokazują w to samo miejsce i to one 
  * są kopiowane
  *
  * \param[in] W - Wektor wzorcowy
  */
     Wektor(Wektor &W);
/*!
 *\brief Metoda odczytujaca dane z pliku zewnetrzengo 
 *
 * Metoda ma za zadanie zapisac dane przechowywane w dynamicznej tablicy 
 * do pliku zewnetrznego o nazwie podanej jako argument wywolania
 * metody
 *
 * \param[in] PlikIn - Nazwa pliku wejsciowego
 */
     virtual void zapisz(string PlikOut);
/*!
 *\brief Metoda odczytujaca dane z pliku zewnetrzengo 
 *
 * Metoda ma za zadanie odczytac dane z pliku zewnetrzego i 
 * umiescic dane w wektorze 
 *
 * \param[in] PlikIn - Nazwa pliku wejsciowego
 */
     virtual void odczyt(string PlikIn);
  /*!
   * \brief Operator przypisania
   *
   * Przeciazenie operatora podstawienia umozliwia    
   * przypisanie jednego wektora do drugiego bez      
   * koniecznosci operowania na poszczegolnych polach 
   *
   * 
   * \param[in] W - Wektor ktory chcemy przypisac             
   *
   * \return
   * Jesli operacja przypisania sie powiedzi zwrocona 
   * zostaenie wartosc true                           
   */
     bool operator = (const Wektor &W);
/*!
 *\brief Metoda wykonujaca mnozenie
 *
 * Metoda ma zadanie wykonac mnozenie przez 2 odpowiednia ilosc danych 
 * oraz zmierzyc czas wykonywania tych operacji dla 10 powtorzen dla kazdej ilosci paczki
 * danych 
 *
 */
     virtual void dzialanie();
   
 /*!
  * \brief Destruktor
  * 
  * Destruktor Wektora zwalniający zaalokowaną pamięć
  */

     ~Wektor() {delete [] _W;}
/*!
 * \brief Opeartor przesuniecia bitowego w lewo
 *
 * Funkcja umozliwa wyswietlenie wczytanego     
 * wyrazenia na standardowym wyjsciu            
 *
 * 
 * \param[in] StrmWyj- referencja strumienia wyjsciowego 
 *            na ktorym ma byc wyswietlony      
 *            symbol                            
 * \param[in] W - obiekt ktory ma zostac wyswietlony na   
 *      strumieniu                              
 *
 * \return
 * funkcja zwraca referencje do strumienia, na  
 * ktorym ma zostac wyswietlony obiekt          
 */
//**********************************************************************
    friend ostream &operator << (ostream & StrmWyj,const Wektor &W )
      {
        for(int i = 0; i < W._Rozmiar; ++i )
            StrmWyj << W._W[i] << "\n";
        return StrmWyj;
      }
/*!
 * \brief Operatro przesuniecia bitowego  w prawo
 *
 * Funckja umozliwia wczytanie Wektora  ze      
 * standardowego wejscia                        
 *
 * 
 * \param[in] StrmWej - referencja strumienia wejsciowego
 *           z ktorego ma byc wczytany symbol   
 * \param[in] W - referencja Wektora do                  
 *       ktorego wczytywane sa jego poszczegolne
 *       elementy jesli sa z odpowiedniego      
 *       zakresu                                
 *
 * \return
 * funckja zwraca referencje do strumienia                    
 */
 //*************************************************************************
     friend istream &operator >>(istream &StrmWej,Wektor &W)
      {
        for(int i = 0; i < W._Rozmiar; ++i)
            {
              StrmWej >> W._W[i];
              if(StrmWej.fail())
              {
                cerr << "Blad Podczas wczytywania!" << endl;
                StrmWej.clear();
                StrmWej.unget();
                StrmWej.setstate(ios::failbit);
                return StrmWej;
              }
            }
      return StrmWej;
      }
};


#endif // WEKTOR_H
