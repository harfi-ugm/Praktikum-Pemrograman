# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = Determine_Largest_Number
SRC = Determine_Largest_Number.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the Determine_Largest_Number.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program in test mode (using test.txt)
test: $(TARGET)
	@echo "Determining largest number..."
	@while read n; do \
		echo $$n | ./$(TARGET); \
	done < test.txt


run: $(TARGET)
	./$(TARGET) run	

# Clean up the compiled files
clean:
	rm -f $(TARGET)

# Phony targets to avoid conflicts
.PHONY: all clean test
