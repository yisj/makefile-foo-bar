## opt-1 one line
```
gcc -Wall main.c foo.c bar.c
gcc -Wall foo.c main.c bar.c
gcc -Wall foo.c bar.c main.c
gcc -Wall bar.c main.c foo.c
...
```

## opt-2 Linking
```
gcc -Wall -c main.c
gcc -Wall -c foo.c
gcc -Wall -c bar.c

gcc -Wall -o foobar foo.o bar.o main.o
gcc -Wall -o foobar2 foo.o main.o bar.o
gcc -Wall -o foobar3 main.o bar.o foo.o
...
```

## opt-3 makefile
```
CC = gcc
CFLAGS = -Wall
LDFLAGS =
OBJFILES = foo.o bar.o main.o
TARGET = foobar

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *~
```

## opt-4 makefile-2
```
all: foobar

foobar: bar.o main.o foo.o
	gcc -Wall -o foobar bar.o main.o foo.o

clean:
	rm -f foo.o bar.o main.o foobar *~

```