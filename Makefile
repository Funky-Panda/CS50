CC = gcc
CFLAGS = -Wall -Werror -ggdb
LIBS = -lm -lcs50

test: test.c
	$(CC) $(CFLAGS) -o test test.c $(LIBS)

.PHONY: clean
clean:
	rm -f test

.SILENT: 