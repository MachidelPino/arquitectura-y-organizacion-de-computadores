CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = funciones

all: $(TARGET)

$(TARGET): funciones.o
		$(CC) $(CFLAGS) $^ -o $@

funciones.o: funciones.c
		$(CC) $(CFLAGS) -c $< -o $@
	
clean:
		rm *.o $(TARGET)
	
.PHONY: all clean