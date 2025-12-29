CC = cc
CFLAGS = -Wall -Wextra -g
CLIBS = -lm

all: vsize.c
	$(CC) $(CFLAGS) $(CLIBS) vsize.c -o vsize
