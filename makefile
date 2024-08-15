CC=gcc
CFLAGS=-O3 -std=c99 -w
TARGET=azrand
all: $(TARGET)

$(TARGET): azrand.c
	$(CC) azrand.c $(CFLAGS) -o $(TARGET)

clean:
	$(RM) $(TARGET)
