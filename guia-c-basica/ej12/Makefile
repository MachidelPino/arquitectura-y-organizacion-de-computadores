CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = rotationN

all: $(TARGET)

$(TARGET): rotationN.o
		$(CC) $(CFLAGS) $^ -o $@

rotationN.o: rotationN.c
		$(CC) $(CFLAGS) -c $< -o $@
	
clean:
		rm *.o $(TARGET)
	
.PHONY: all clean