CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = fijos

all: $(TARGET)

$(TARGET): fijos.o
		$(CC) $(CFLAGS) $^ -o $@

fijos.o: fijos.c
		$(CC) $(CFLAGS) -c $< -o $@
	
clean:
		rm *.o $(TARGET)
	
.PHONY: all clean