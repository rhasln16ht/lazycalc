# Compiler
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -Iheader

# Mode flags
RELEASE_FLAGS = -O2
DEBUG_FLAGS = -g -O0

# Directory
SRC_DIR = src
BUILD_DIR = build

# Files
SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRC))

TARGET = $(BUILD_DIR)/lazycalc

# Default build (release)
all: release

# Release build
release: CXXFLAGS += $(RELEASE_FLAGS)
release: $(TARGET)

# Debug build
debug: CXXFLAGS += $(DEBUG_FLAGS)
debug: $(TARGET)

# Linking
$(TARGET): $(OBJ)
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(OBJ) -o $(TARGET)

# Compile source to object
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -rf $(BUILD_DIR)

# Rebuild everything
re: clean all

.PHONY: all release debug clean re
