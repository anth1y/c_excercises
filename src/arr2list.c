#include <stdio.h>

int main(){
int i;

int arr[5] = {10,20,25,8,2};

for(i = 0;i < 5; i++ ){
	// here we are printing the place in the array with it's value
	printf("arr %d is %d\n", i, arr[i]);
}

return 0;
}
