# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = Creating_Payslip
SRC = Creating_Payslip.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the Creating_Payslip.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

# Run the program in test mode (using test.txt)
test: $(TARGET)
	@echo "Testing Sum of Natural Numbers program..."
	@while read n; do \
		echo $$n | ./$(TARGET); \
	done < test.txt

# Clean up the compiled files
clean:
	rm -f $(TARGET)

# Phony targets to avoid conflicts
.PHONY: all clean test
