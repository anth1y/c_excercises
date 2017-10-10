#include <stdio.h>
#include <stdlib.h>

#define INITIAL_SIZE 10
#define BUCKET_SIZE 5

static int data_count; // how many ints we have stored
static int data_size;  // how many ints we can store in this block
static int *data;      // the block of data itself

int main(void)
{
	void add_data(int new_data); // function prototype
	int i;

	// first, initialize the data area
	data_count = 0;
	data_size = INITIAL_SIZE;
	data = malloc(data_size * sizeof(int)); // allocate initial area

	// now add a bunch of data
	for(i = 0; i < 23; i++) {
		add_data(i);
	}

	return 0;
}

void add_data(int new_data)
{
	// if data_count == data_size the area is full and
	// needs to be realloc() before we can add another
	
	if(data_count == data_size){
		// we're full up so add a bucket;
		data_size += BUCKET_SIZE;
		data = realloc(data, data_size * sizeof(int));
	}

	// now store the data
	*(data+data_count) = new_data;

	// ^^^ the above line could have used array notation, like so:
	// data[data_count] = new_data;
	
	data_count++;
}
