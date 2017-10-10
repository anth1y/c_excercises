#include <stdio.h>

static char input[200];

int x, y;
int add(int x, int y)
{
	int z = x + y ;
	return z; 
}
int sub(int x, int y)
{
	int z = x - y;
	return z; 
}
int mult(int x, int y)
{
	int z = x * y;
	return z; 
}
int div(int x, int y)
{
	int z = x / y;
	return z; 
}
int main (int arc, char *argv[]) 
{
// TODO: if else statement on the operands
// research if there is a getint instead of getchar
// put this in a while loop
// present the user a menu of operands after recieving first digit.
while(){  
  fgets(input, 200, stdin);

  int x, y;
 
  switch()
  {
	  case '+': add(x,y);
	  case '-': sub(x,y);
	  case '*': mult(x,y);
	  case '/': div(x,y);
		    default
  }
 }
  

 
}

