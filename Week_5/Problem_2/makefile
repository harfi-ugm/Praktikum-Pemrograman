# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = Reverse
SRC = Reverse.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean test
