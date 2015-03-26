all: index.c
	gcc -I./include -E index.c | grep "<html>" -A999999 > index.html
