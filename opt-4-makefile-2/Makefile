all: foobar

foobar: bar.o main.o foo.o
	gcc -Wall -o foobar bar.o main.o foo.o

clean:
	rm -f foo.o bar.o main.o foobar *~
