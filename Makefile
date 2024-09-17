CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g
INCLUDES = -I.
SRCS = main.c instruction.c machine.c debug.c
OBJS = $(patsubst %.c,build/%.o,$(SRCS))
TARGET = stackmachine
BUILD_DIR = build

.PHONY: all clean

all: $(BUILD_DIR) $(TARGET)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^

build/%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR) $(TARGET)
