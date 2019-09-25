# A simple Makefile for Nybble Manifesto

CC = gcc

BIN = manifesto

all: $(BIN)

clean: 
	rm -f .*.swp manifesto

manifesto:
	$(CC) manifesto.c -o $(BIN); ./manifesto
