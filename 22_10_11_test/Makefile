.PHONY : all
all : proc2 mycmd myshell

mycmd : mycmd.c
	gcc -std=c11 -o $@ $^
proc2 : proc2.c
	gcc -std=c11 -o $@ $^
myshell : myshell.c
	gcc -std=c11 -o $@ $^
.PHONY : clean
clean:
	rm -rf  mycmd proc2 myshell
