CC = gcc
FLAGS = -Wall -Wextra -Werror
FILES = addition.c soustraction.c multiplication.c division.c
TARGET = exoMake

#Règles
build: main.c ${FILES}
		${CC} ${FLAGS} -o ${TARGET} main.c ${FILES}

run:
	./exoMake

.PHONY: clean

#Nettoyage
clean:
	rm -f exoMake