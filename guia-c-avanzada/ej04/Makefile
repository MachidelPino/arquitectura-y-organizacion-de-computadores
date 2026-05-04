CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = punteros

all: $(TARGET)

$(TARGET): punteros.c
		$(CC) $(CFLAGS) $< -o $@
	
clean:
		rm *.o $(TARGET)
	
.PHONY: all clean