.POSIX:
CFLAGS = -std=c99 -Wall -Wextra -pedantic -g
CPPFLAGS = -Isrc
LDFLAGS=-g
LIBS =
CC = c99
LD = ${CC}
OBJ = main.o src/define.o

.SUFFIXES:
.SUFFIXES: .o .c

.c.o:
	${CC} ${CFLAGS} ${CPPFLAGS} -c -o$@ $<

main: ${OBJ}
	${LD} -oprogram ${LDFLAGS} ${OBJ} ${LIBS}

clean:
	rm *.o  src/*.o

.PHONY: all clean

