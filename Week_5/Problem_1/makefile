# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = FizzBuzz
SRC = FizzBuzz.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean test
