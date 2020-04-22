.POSIX:
CFLAGS = -std=c99 -Wall -Wextra -pedantic -g
LDFLAGS=-g
LIBS =
CC = c99
LD = ${CC}
OBJ = main.o

all: ${OBJ}

.SUFFIXES:
.SUFFIXES: .o .c

.c.o:
	${CC} ${CFLAGS} -oproj $<

${BIN}: ${OBJ}
	${LD} -o$@ ${LDFLAGS} ${OBJ} ${LIBS}

clean:
	rm *.o

