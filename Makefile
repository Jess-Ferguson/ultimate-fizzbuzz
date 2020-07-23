CC := gcc
SRCDIR := src
OBJDIR := obj
DEPDIR := include
TARGET := fizzbuzz
CFLAGS := -Wall -Wextra -Wpedantic -g

LIBS := 

_OBJS := main.o fizzbuzz.o

OBJS := $(patsubst %,$(OBJDIR)/%,$(_OBJS))

_DEPS := fizzbuzz.h
DEPS := $(patsubst %,$(DEPDIR)/%,$(_DEPS))

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(DEPS) 
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(OBJDIR)/*.o $(TARGET)