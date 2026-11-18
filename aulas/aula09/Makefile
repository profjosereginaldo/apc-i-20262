all: limpa compila roda

compila: estruturas.c
	gcc estruturas.c -o a.out -lm

roda: a.out
	./a.out

limpa:
	rm a.out