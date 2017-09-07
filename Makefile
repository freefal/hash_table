CC=gcc
CFLAGS=-I. -lm

test_hash: main.o hash_table.o
	gcc -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -rf *.o
	rm test_hash
