CFLAGS := -Wall -g
LDFLAGS := -lm

SRC := zerobis.c
trash += *.o $(BIN)

VPATH = src

numcalc: main.c $(SRC)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)
trash += numcalc

clean:
	$(RM) $(trash)

%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

