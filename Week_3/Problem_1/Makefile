# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = Calculate_Determinant
SRC = Calculate_Determinant.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the Calculate_Determinant.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program in test mode (using test.txt)
test: $(TARGET)
	./$(TARGET) test

# Clean up the compiled files
clean:
	rm -f $(TARGET)

# Phony targets to avoid conflicts
.PHONY: all clean test
