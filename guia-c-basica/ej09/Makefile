CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = 3eq

all: $(TARGET)

$(TARGET): 3eq.o
		$(CC) $(CFLAGS) $^ -o $@

3eq.o: 3eq.c
		$(CC) $(CFLAGS) -c $< -o $@
	
clean:
		rm *.o $(TARGET)
	
.PHONY: all clean