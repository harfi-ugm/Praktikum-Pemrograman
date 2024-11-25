CXX = g++
CXXFLAGS = -Wall
TARGET = 2largestnumber
SRC = 2largestnumber.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean test
