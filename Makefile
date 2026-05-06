INC_FLAGS := -I./include
SRC_DIR := ./src
BUILD_DIR := ./build

SRCS := $(shell find $(SRC_DIR) -name '*.c' -or -name '*.s')

aes: $(BUILD_DIR)
	$(CC) $(SRCS) $(INC_FLAGS) -o $(BUILD_DIR)/aes

clean:
	rm -r $(BUILD_DIR)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)
