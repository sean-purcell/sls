all:
	gcc sls.c -g -o sls -lncurses

install:
	cp sls /usr/local/bin/sls
