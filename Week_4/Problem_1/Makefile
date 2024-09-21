# Compiler
CC = g++

# Compiler flags
CFLAGS = -Wall

# Executable file
EXEC = sum_program

# Source file
SRC = Sum.cpp

# Rule to compile
all: $(EXEC)

# Create executable
$(EXEC): $(SRC)
	$(CC) $(CFLAGS) -o $(EXEC) $(SRC)

# Run the program
run: $(EXEC)
	./$(EXEC)

# Test the program using test.txt
test: $(EXEC)
	@echo "Testing Sum of Natural Numbers program..."
	@while read n; do \
		echo $$n | ./$(EXEC); \
	done < test.txt


# Clean the compiled files
clean:
	rm -f $(EXEC)
