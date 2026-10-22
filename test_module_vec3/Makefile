CC      = gcc
CFLAGS  = -Wall -Wextra -std=c11 -Iinclude
TARGET  = vec3test
BUILD   = build

SRCS    = src/vec3.c src/main.c
OBJS    = $(SRCS:src/%.c=$(BUILD)/%.o)

all: $(BUILD)/$(TARGET)

$(BUILD)/$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(BUILD)/%.o: src/%.c | $(BUILD)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD):
	mkdir -p $(BUILD)

run: $(BUILD)/$(TARGET)
	./$(BUILD)/$(TARGET)

clean:
	rm -rf $(BUILD)

.PHONY: all run clean
