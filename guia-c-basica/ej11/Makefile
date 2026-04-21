CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = rotation

all: $(TARGET)

$(TARGET): rotation.o
		$(CC) $(CFLAGS) $^ -o $@

rotation.o: rotation.c
		$(CC) $(CFLAGS) -c $< -o $@
	
clean:
		rm *.o $(TARGET)
	
.PHONY: all clean