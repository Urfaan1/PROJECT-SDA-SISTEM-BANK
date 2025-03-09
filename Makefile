CC = gcc
CFLAGS = -Wall -g
TARGET = BankMahasiswa
SRCS = main.c fungsi.c

all: $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	del *.o $(TARGET)
