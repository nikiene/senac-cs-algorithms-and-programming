# Makefile

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c99

# Directories
DIRS = list1 list2 list3 list4 list5 list6 list7 list8 list9

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