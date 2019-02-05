bin/proj1:  lib/streamcopy.o lib/main.o
	mkdir -p bin
	g++ -Wall lib/streamcopy.o lib/main.o -o bin/proj1

lib/streamcopy.o: streamcopy.cc include/streamcopy.h
	mkdir -p lib
	g++ -Wall -c streamcopy.cc -o lib/streamcopy.o

lib/main.o: main.cc include/streamcopy.h
	mkdir -p lib
	g++ -Wall -c main.cc -o lib/main.o

clean:
	rm lib/*
	rm bin/*
