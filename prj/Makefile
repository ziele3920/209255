#
#  To sa opcje dla kompilacji
#
CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++11


Struktury:obj/TabListaPod.o obj/Lista.o obj/StosTab.o obj/Stos.o obj/Kolejka.o obj/StrukturyBenchmark.o obj/BenchmarkInterfejs.o obj/ListaTab.o obj/Main.o
	g++ -Wall -pedantic -o Struktury obj/*.o
obj/Main.o: src/Main.cpp inc/*.h
	g++ ${CPPFLAGS} -o obj/Main.o src/Main.cpp
obj/StrukturyBenchmark.o: src/StrukturyBenchmark.cpp inc/StrukturyBenchmark.h 
	g++ ${CPPFLAGS} -o obj/StrukturyBenchmark.o src/StrukturyBenchmark.cpp
obj/BenchmarkInterfejs.o : src/BenchmarkInterfejs.cpp inc/BenchmarkInterfejs.h
	g++ ${CPPFLAGS} -o obj/BenchmarkInterfejs.o src/BenchmarkInterfejs.cpp
obj/ListaTab.o : src/ListaTab.cpp inc/ListaTab.h
	g++ ${CPPFLAGS} -o obj/ListaTab.o src/ListaTab.cpp
obj/TabListaPod.o : src/TabListaPod.cpp inc/TabListaPod.h
	g++ ${CPPFLAGS} -o obj/TabListaPod.o src/TabListaPod.cpp	
obj/Lista.o: src/Lista.cpp inc/Lista.h 
	g++ ${CPPFLAGS} -o obj/Lista.o src/Lista.cpp
obj/StosTab.o: src/StosTab.cpp inc/StosTab.h 
	g++ ${CPPFLAGS} -o obj/StosTab.o src/StosTab.cpp
obj/Stos.o: src/Stos.cpp inc/Stos.h 
	g++ ${CPPFLAGS} -o obj/Stos.o src/Stos.cpp
obj/Kolejka.o: src/Kolejka.cpp inc/Kolejka.h
	g++ ${CPPFLAGS} -o obj/Kolejka.o src/Kolejka.cpp
clean:
	rm -f obj/*.o Struktury


