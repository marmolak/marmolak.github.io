all: arduino-hello.c
	mkdir -p ../../g/a/
	gcc -I../../include/ -E ./arduino-hello.c | grep "<html>" -A99999 > ../../g/a/arduino-hello.html
	gcc -I../../include/ -E ./ascii-porn.c  | grep "<html>" -A99999 > ../../g/a/ascii-porn.html
push: all
	git add ./arduino-hello.c
	git add ./ascii-porn.c 
	git add ../../g/a/arduino-hello.html
	git add ../../g/a/ascii-porn.html
	git commit -m "Change arduino-hello page." --author "Robin Hack <hack.robin@gmail.com>"
	git push
	
