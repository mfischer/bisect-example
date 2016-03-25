all: bisect

bisect: bisect.c
	$(CC) -o $@ $^

.PHONY: clean

clean:
	-rm bisect
