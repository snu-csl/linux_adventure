cc = gcc
TARGET = seg
OBJS = segfault.o sum.o
CFLAGS = -g

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

.c.o:
	$(CC) -c -o $@ $<

clean:
	rm *.o $(TARGET)
