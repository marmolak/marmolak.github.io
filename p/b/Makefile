all: blackthorne.c bananas.c
	gcc -I../../include/ -E ./blackthorne.c | grep "<html>" -A99999 > ../../g/b/blackthorne.html
	gcc -I../../include/ -E ./bananas.c | grep "<html>" -A99999 > ../../g/b/bananas.html
push: all
	git add ./blackthorne.c
	git add ./bananas.c
	git add ../../g/b/blackthorne.html
	git add ../../g/b/bananas.html
	git commit -m "Change pages started with letter B." --author "Robin Hack <hack.robin@gmail.com>"
	git push
	
