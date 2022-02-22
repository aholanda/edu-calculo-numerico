CFLAGS := -Wall -g
LDFLAGS := -lm

SRC := $(wildcard src/*.c)
BIN := $(patsubst src/%.c,%,$(SRC))
trash += *.o $(BIN)

VPATH = src

a:
	echo $(BIN)

%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

