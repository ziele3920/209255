#
#  To sa opcje dla kompilacji
#
CPPFLAGS= -c -g -Iinc -Wall -pedantic

__start__: Wektor
	./Wektor

Wektor:obj/main.o obj/Wektor.o
	g++ -Wall -pedantic -o Wektor obj/main.o obj/Wektor.o
obj/main.o: src/main.cpp inc/Wektor.h
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp
obj/Wektor.o: src/Wektor.cpp inc/Wektor.h inc/Interfejs.h
	g++ ${CPPFLAGS} -o obj/Wektor.o src/Wektor.cpp
clean:
	rm -f *.o Wektor


