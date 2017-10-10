#Current make 
CC=gcc
BIN=./bin/
SOURCE=./src/

LIST=$(BIN)

MYPROG: $(OBJ)
	$(CC) -o $@ $^ 

	
