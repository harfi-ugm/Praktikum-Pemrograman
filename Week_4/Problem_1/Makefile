#compiler
CC = g++ 

#Compiler flags
CFLAGS = -wall

#Executable file name
EXEC = SUM

#Source file
SRC = sum.cpp

#Compile the program
all: $(EXEC)

#Create the executable
%(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(SRC)

#Clean up the compiled files
clean:
	rm -f $(EXEC)

#Run the program
run: $(EXEC)
	./$(EXEC)

.PHONY: all clean test
