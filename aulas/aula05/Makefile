all: limpa compila roda

compila: comando_switch.c
	gcc comando_switch.c -o a.out -lm

roda: a.out
	./a.out

limpa:
	rm a.out