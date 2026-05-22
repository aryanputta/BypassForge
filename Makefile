CC ?= cc
CFLAGS ?= -Wall -Wextra -Werror -std=c11

.PHONY: all test clean

all: bypass_forwarder

bypass_forwarder: src/main.c include/ring_buffer.h
	$(CC) $(CFLAGS) src/main.c -Iinclude -o bypass_forwarder

test: bypass_forwarder
	./bypass_forwarder

clean:
	rm -f bypass_forwarder

