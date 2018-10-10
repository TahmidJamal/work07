all: main.o work07.o
	gcc -o out main.o work07.o

work07.o: work07.c
	gcc -c work07.c

main.o: main.c work07.h
	gcc -c main.c

run:
	./out

clean:
	rm out
	rm *.o
