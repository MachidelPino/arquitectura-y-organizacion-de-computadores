CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = cast

all: $(TARGET)

$(TARGET): cast.o
		$(CC) $(CFLAGS) $^ -o $@

hola.o: cast.c
		$(CC) $(CFLAGS) -c $< -o $@
	
clean:
		rm *.o $(TARGET)
	
.PHONY: all clean