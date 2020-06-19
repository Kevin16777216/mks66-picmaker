OBJECTS= main.o display.o
CFLAGS= -Wall
CC= gcc

run: main
	./main

main: $(OBJECTS)
	$(CC) -o main $(OBJECTS)

main.o: main.c display.h ml6.h
	$(CC) -c main.c


display.o: display.c display.h ml6.h
	$(CC) $(CFLAGS) -c display.c


clean:
	rm *.o *~
