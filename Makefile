.POSIX:
CFLAGS = -std=c99 -Wall -Wextra -pedantic -g
LDFLAGS=-g
LIBS =
CC = c99
LD = ${CC}
OBJ = main.o 
SOBJ = src/define.o
all: ${SOBJ} ${OBJ}

.SUFFIXES:
.SUFFIXES: .o .c

.c.o:
	${CC} ${CFLAGS} -oproj $<

src: ${SOBJ}
	${LD} -o$@ ${LDFLAGS} ${SOBJ} ${LIBS}

main: ${OBJ}
	${LD} -o$@ ${LDFLAGS} ${OBJ} ${LIBS}

clean:
	rm *.o src/*.o

