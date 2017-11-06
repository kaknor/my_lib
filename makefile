CC=gcc
FLAGS= -std=c99 -Wall -g -o

DEP=
SRC=

BIN=my_lib

.PHONY: all clean

all: $(SRC)
	gcc $(FLAGS) $(BIN) $(SRC) $(DEP)

test: $(TEST)
	gcc $(FLAGS) $(TEST_BIN) $(TEST) $(TEST_DEP)

clean:
	$(RM) $(BIN) *~
