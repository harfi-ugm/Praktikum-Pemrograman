# Compiler
CC = g++
CFLAGS = -Wall
EXEC = multiplication_program
SRC = Multiplication.cpp

all: $(EXEC)

$(EXEC): $(SRC)
	$(CC) $(CFLAGS) -o $(EXEC) $(SRC)

run: $(EXEC)
	./$(EXEC)

# Test the program using test.txt
test: $(EXEC)
	@echo "Testing Multiplication Table program..."
	@while read n; do \
		echo $$n | ./$(EXEC); \
	done < test.txt

# Clean the compiled files
clean:
	rm -f $(EXEC)
