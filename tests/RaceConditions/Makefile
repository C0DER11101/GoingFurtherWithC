exe: main.o bank.o
	gcc main.o bank.o -o exe -lm

main.o: main.c bank.h
	gcc -c main.c

bank.o: bank.c bank.h
	gcc -c bank.c

.PHONY: clean

clean:
	-rm main.o bank.o exe
