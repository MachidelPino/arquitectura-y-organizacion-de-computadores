CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = estados

all: $(TARGET)

$(TARGET): estados.o
		$(CC) $(CFLAGS) $^ -o $@

estados.o: estados.c
		$(CC) $(CFLAGS) -c $< -o $@
	
clean:
		rm *.o $(TARGET)
	
.PHONY: all clean