all: games-finished.c gcc-bug.c games-in-progress.c
	gcc -I../../include/ -E ./games-finished.c | grep "<html>" -A99999 > ../../g/g/games-finished.html
	gcc -I../../include/ -E ./gcc-bug.c | grep "<html>" -A99999 > ../../g/g/gcc-bug.html
	gcc -I../../include/ -E ./games-in-progress.c | grep "<html>" -A99999 > ../../g/g/games-in-progress.html
push: all
	git add ./games-finished.c
	git add ./gcc-bug.c
	git add ./games-in-progress.c
	git add ../../g/g/games-finished.html
	git add ../../g/g/gcc-bug.html
	git add ../../g/g/games-in-progress.html
	git commit -m "All g pages has been recopiled" --author "Robin Hack <hack.robin@gmail.com>"
	git push
	
