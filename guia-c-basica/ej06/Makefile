CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = secret

all: $(TARGET)

$(TARGET): secret.o
		$(CC) $(CFLAGS) $^ -o $@

hola.o: secret.c
		$(CC) $(CFLAGS) -c $< -o $@
	
clean:
		rm *.o $(TARGET)
	
.PHONY: all clean