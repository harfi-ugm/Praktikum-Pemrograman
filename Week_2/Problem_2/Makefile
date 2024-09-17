# Makefile for problem_1

# Compiler
CC = g++

# Compiler flags
CFLAGS = -Wall

# Executable file name
EXEC = program

# Source file
SRC = Creating_payslip.cpp

# Object file
OBJ = $(SRC:.cpp=.o)

# Compile the code
all: $(EXEC)

# Create the executable
$(EXEC): $(OBJ)
    $(CC) $(CFLAGS) -o $(EXEC) $(OBJ)

# Create object files
%.o: %.cpp
    $(CC) $(CFLAGS) -c $< -o $@

# Clean up
clean:
    rm -f $(OBJ) $(EXEC)

# Run the program
run: $(EXEC)
    ./$(EXEC)

# Alias for run
test: run
