.POSIX:
CFLAGS = -std=c99 -Wall -Wextra -pedantic -g
CPPFLAGS = -Isrc
LDFLAGS=-g
LIBS =
CC = c99
LD = ${CC}
OBJ = main.o src/define.o
all: ${OBJ}

.SUFFIXES:
.SUFFIXES: .o .c

.c.o:
	${CC} ${CFLAGS} ${CPPFLAGS} -oproj $<

main: ${OBJ}
	${LD} -c$@ ${LDFLAGS} ${OBJ} ${LIBS}

clean:
	rm *.o src/*.o

.PHONY: all clean

