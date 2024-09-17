# Makefile

# Compiler
CC = g++

# Compiler flags
CFLAGS = -Wall

# Executable file name
EXEC = program

# Source files
SRC = main.cpp

# Object files
OBJ = $(SRC:.cpp=.o)

# Default target to compile the code
all: $(EXEC)

# Rule to link the object files and create the executable
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ)

# Rule to compile the source file into object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and the executable
clean:
	rm -f $(OBJ) $(EXEC)

# Run the program
run: $(EXEC)
	./$(EXEC)

# Test the program (alias for run)
test: run
