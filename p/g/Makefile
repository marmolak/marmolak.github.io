all: games-finished.c
	gcc -I../../include/ -E ./games-finished.c | grep "<html>" -A99999 > ../../g/g/games-finished.html
push: all
	git add ./games-finished.c
	git add ../../g/g/games-finished.html
	git commit -m "Change finished games page." --author "Robin Hack <hack.robin@gmail.com>"
	git push
	
