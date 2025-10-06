
APPLICATION_NAME := launch

CC := gcc

BIN_DIR := bin

SRC := $(shell find ./src -mindepth 1 -type f -regex ".*\.c")
INCLUDE := $(patsubst %, -I%, $(shell find ./include -type d))

all: dirs
	$(CC) $(INCLUDE) $(SRC) -o $(BIN_DIR)/$(APPLICATION_NAME)

dirs:
	@mkdir $(BIN_DIR)

clean:
	rm -rf $(BIN_DIR)
