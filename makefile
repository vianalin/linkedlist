all: main.o structy2.o
	gcc -o linkedlist main.o structy2.o

main.o: main.c structy2.h
	gcc -c main.c

structy2.o: structy2.c structy2.h
	gcc -c structy2.c

run:
	./yum

clean:
	rm *.o
