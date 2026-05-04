CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = direcciones

all: $(TARGET)

$(TARGET): direcciones.c
		$(CC) $(CFLAGS) $< -o $@
	
clean:
		rm *.o $(TARGET)
	
.PHONY: all clean