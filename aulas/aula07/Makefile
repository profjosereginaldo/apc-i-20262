all: limpa compila roda

compila: vetores.c
	gcc vetores.c -o a.out -lm

roda: a.out
	./a.out

limpa:
	rm a.out