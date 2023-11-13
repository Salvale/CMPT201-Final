CC=gcc
CFLAGS=-Wall -std=c11
LDFLAGS= -lc -lm
App = play
Objs = main.c

$(App): $(Objs)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -lncurses -ltinfo -o  $@

.PHONY: clean

clean:
	rm $(App)
