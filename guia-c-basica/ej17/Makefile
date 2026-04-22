CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = estados2

all: $(TARGET)

$(TARGET): estados2.o
		$(CC) $(CFLAGS) $^ -o $@

estados2.o: estados2.c
		$(CC) $(CFLAGS) -c $< -o $@
	
clean:
		rm *.o $(TARGET)
	
.PHONY: all clean