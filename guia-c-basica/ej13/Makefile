CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = 2dice

all: $(TARGET)

$(TARGET): 2dice.o
		$(CC) $(CFLAGS) $^ -o $@

2dice.o: 2dice.c
		$(CC) $(CFLAGS) -c $< -o $@
	
clean:
		rm *.o $(TARGET)
	
.PHONY: all clean