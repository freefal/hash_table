CC=gcc
CFLAGS=-I. -lm
DEPS = hash_table.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test_hash: main.o hash_table.o
	gcc -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -rf *.o
	rm test_hash
