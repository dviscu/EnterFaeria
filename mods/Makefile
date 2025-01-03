# Makefile for MyMod

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -g

# Directories
SRC_DIR = ./src
BUILD_DIR = ./build

# Files
SRCS = $(SRC_DIR)/mod.c
OBJS = $(BUILD_DIR)/mod.o
TARGET = $(BUILD_DIR)/mymod

# Default target
all: $(TARGET)

# Build the target
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files into object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR)

# Test the mod
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
