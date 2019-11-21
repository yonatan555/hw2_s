CC=gcc
CFLAGS=-I.
AR=ar
FLAGS= -Wall -g
DEPS = myBank.h
OBJECTS_MAIN=main.o
OBJECTS_LIB= myBank.o

all:program

program:$(OBJECTS_MAIN) libmyBank.so
	$(CC) $(FLAGS) -o program $(OBJECTS_MAIN) -L. ./libmyBank.so

libmyBank.so:$(OBJECTS_LIB) 
	$(CC) -shared -o libmyBank.so $(OBJECTS_LIB)

%.o: %.c $(DEPS)
	$(CC) $(FLAG) -c -o $@ $< $(CFLAGS)



.PHONY:clean all

clean:
	rm -f *.o *.a *.so exe

