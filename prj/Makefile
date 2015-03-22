#
#  To sa opcje dla kompilacji
#
CPPFLAGS= -c -g -Iinc -Wall -pedantic -lrt -std=c++11


Struktury: obj/Lista.o obj/Stos.o obj/Kolejka.o obj/ListaTab.o obj/StrukturyBenchmark.o obj/BenchmarkInterfejs.o  obj/Main.o
	g++ -Wall -pedantic -o Struktury obj/Kolejka.o obj/ListaTab.o obj/Stos.o obj/Lista.o obj/StrukturyBenchmark.o obj/BenchmarkInterfejs.o  obj/Main.o 
obj/Main.o: src/Main.cpp inc/ListaTab.h inc/Stos.h inc/Lista.h inc/StrukturyBenchmark.h inc/BenchmarkInterfejs.h
	g++ ${CPPFLAGS} -o obj/Main.o src/Main.cpp
obj/StrukturyBenchmark.o: src/StrukturyBenchmark.cpp inc/StrukturyBenchmark.h 
	g++ ${CPPFLAGS} -o obj/StrukturyBenchmark.o src/StrukturyBenchmark.cpp
obj/BenchmarkInterfejs.o : src/BenchmarkInterfejs.cpp inc/BenchmarkInterfejs.h
	g++ ${CPPFLAGS} -o obj/BenchmarkInterfejs.o src/BenchmarkInterfejs.cpp
obj/ListaTab.o : src/ListaTab.cpp inc/ListaTab.h
	g++ ${CPPFLAGS} -o obj/ListaTab.o src/ListaTab.cpp	
obj/Lista.o: src/Lista.cpp inc/Lista.h 
	g++ ${CPPFLAGS} -o obj/Lista.o src/Lista.cpp
obj/Stos.o: src/Stos.cpp inc/Stos.h 
	g++ ${CPPFLAGS} -o obj/Stos.o src/Stos.cpp
obj/Kolejka.o: src/Kolejka.cpp inc/Kolejka.h
	g++ ${CPPFLAGS} -o obj/Kolejka.o src/Kolejka.cpp
clean:
	rm -f obj/*.o Struktury


