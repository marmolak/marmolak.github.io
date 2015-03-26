all: blackthorne.c
	gcc -I../../include/ -E ./blackthorne.c | grep "<html>" -A99999 > ../../g/b/blackthorne.html
push: all
	git add ./blackthorne.c
	git add ../../g/b/blackthorne.html
	git commit -m "Change blackthorne page." --author "Robin Hack <hack.robin@gmail.com>"
	git push
	
