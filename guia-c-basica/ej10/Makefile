CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = whiletofor

all: $(TARGET)

$(TARGET): whiletofor.o
		$(CC) $(CFLAGS) $^ -o $@

whiletofor.o: whiletofor.c
		$(CC) $(CFLAGS) -c $< -o $@
	
clean:
		rm *.o $(TARGET)
	
.PHONY: all clean