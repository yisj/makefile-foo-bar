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
