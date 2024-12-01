CC = gcc
CFLAGS = -Wall -Wextra -std=c11
OBJ = main.o fibonacci.o factorial.o
TARGET = fibfac

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
	rm -f $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)