CC=clang
CFLAGS=-O3 -march=native

all: inference

inference: src/main.c src/matrix.c
	$(CC) $(CFLAGS) src/main.c src/matrix.c -o inference.exe

clean:
	rm -f inference.exe