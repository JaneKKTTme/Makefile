CC=gcc

all : Translatetemperature.exe

Translatetemperature.exe: Translatetemperature.o
				$(CC) Translatetemperature.o -o Translatetemperature.exe

Translatetemperature.o: Translatetemperature.c
							$(CC) -c Translatetemperature.c -o Translatetemperature.o

.PHONY : clean
clean:
		-rm all Translatetemperature.o Translatetemperature.exe

