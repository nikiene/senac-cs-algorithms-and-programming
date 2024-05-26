# Makefile

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c99

# Directories
DIRS = List1 List2 List3 List4 List5 List6 List7 List8 List9

# Programs
PROGS = $(foreach dir,$(DIRS),$(wildcard $(dir)/*.c))

# Object files
OBJS = $(PROGS:.c=.o)

# Executables
EXECS = $(PROGS:.c=)

.PHONY: all clean

all: $(EXECS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%: %.o
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS) $(EXECS)