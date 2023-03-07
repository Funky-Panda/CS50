CC = gcc
CFLAGS = -Wall -Werror -ggdb
LIBS = -lm -lcs50

credit: credit.c
	$(CC) $(CFLAGS) -o credit credit.c $(LIBS)

.PHONY: clean
clean:
	rm -f credit

.SILENT: 