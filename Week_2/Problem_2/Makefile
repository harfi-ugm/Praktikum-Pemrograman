# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = Solving_Quadratic_Equation
SRC = Solving_Quadratic_Equation.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the Solving_Quadratic_Equation.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

# Run the program in test mode (using test.txt)
test: $(TARGET)
	@echo "Solving Quadratic Equation"
	@while read n; do \
		echo $$n | ./$(TARGET); \
	done < test.txt

# Clean up the compiled files
clean:
	rm -f $(TARGET)

# Phony targets to avoid conflicts
.PHONY: all clean test
