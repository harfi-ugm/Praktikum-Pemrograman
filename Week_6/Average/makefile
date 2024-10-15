# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = average
SRC = average.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

test: $(TARGET)
	@echo "Determining largest number..."
	@while read n; do \
		echo $$n | ./$(TARGET); \
	done < test.txt

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean test
