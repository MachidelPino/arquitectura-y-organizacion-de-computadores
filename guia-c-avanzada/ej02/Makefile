CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = evolution

all: $(TARGET)

$(TARGET): evolution.c
		$(CC) $(CFLAGS) $< -o $@
	
clean:
		rm *.o $(TARGET)
	
.PHONY: all clean