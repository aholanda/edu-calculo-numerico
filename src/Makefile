CFLAGS := -Wall -g -pedantic -ansi -std=c99
LDFLAGS := -lm

SRC := bisection.c regula.c
trash += *.o $(BIN)

VPATH = src

numcalc: main.c $(SRC)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)
trash += numcalc

clean:
	$(RM) $(trash)

%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

