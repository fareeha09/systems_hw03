#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	//initialize new int array with size 10
	int array1[10];
	
	srand(time(NULL));
	//populate array with random values except last element
	for (int i=0; i<9; i++){
		array1[i]= rand();		
	}
	//set last element to 0
	array1[9]=0;
	
	//print each element of the first array 
	printf("Array 1: \n");
	for (int num=0; num<10; num++){
		printf("element %d: %d\n", num, array1[num]);
	}
	printf("--------------------------------------\n");
	//initializes new array
	int array2[10];
	
	//initializes pointer to first array
	int *pointer = &array1[0];
	
	//populate new array with values of first array in reverse order
	for (int j=9; j>=0; j--){
		array2[j]= *pointer;
		pointer+=1;
	}
	
	//print each element of the seccond array 
	printf("Array 2: \n");
	for (int num2=0; num2<10; num2++){
		printf("element %d: %d\n", num2, array2[num2]);
	}
	printf("--------------------------------------\n");
	//check that they're the same 
	printf("Check that they're the same: \n");
	int h=9;
	for (int k=0; k<10; k++,h--){
		printf("array1[%d]: %d, array2[%d]: %d\n", k, array1[k], h, array2[h]);  
	}
}