# Makefile for a C++ project

# Compiler
CXX := g++

# Compiler flags
CXXFLAGS := -Wall -Wextra -std=c++11

# Source files
SRC := main.cpp figura.cpp

# Header files
HEADERS := figura.h

# Object files (automatically generated from source files)
OBJ := $(SRC:.cpp=.o)

# Executable name
TARGET := my_program

# Default target
all: $(TARGET)

# Compile source files into object files
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Link object files to create the executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Clean up generated files
clean:
	rm -f $(OBJ) $(TARGET)

# Phony targets (targets that are not actual files)
.PHONY: all clean
