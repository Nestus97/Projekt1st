CC=g++

debug: CCFLAGS+=-g
debug: project

all: projekt

project: main.o class.o
	$(CC) $(CCFLAGS) main.o class.o -o Projekt_Wstepny

main.o: main.cpp class.h
	$(CC) $(CCFLAGS) -c main.cpp

class.o: class.cpp class.h
	$(CC) $(CCFLAGS) -c class.cpp

clean:
	rm -rf *o Projekt_Wstepny