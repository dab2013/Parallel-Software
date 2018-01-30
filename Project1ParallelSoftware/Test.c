//#include <stdio.h>
//
//void main() {
//	
//	/* print off memory address of temp is stored on computer */
//	int temp = 19;
//	int * pTemp = &temp;
//	printf("Address \t Name \t Value\n");
//	printf("%p \t %s \t %d \n", pTemp, "temp", temp);
//
//	//dereference pointers - get the value of a value of the pointer
//	printf("\n *pTemp: %d \n\n", *pTemp);
//
//	//pointers and arrays
//	int tempArray[5] = { 1, 22, 100, 2000, 21309 };
//
//	for (int i = 0; i < 5; i++) {
//		printf("tempArray[%d]: \t %d \t %p \n", i, tempArray[i], &tempArray[i]);
//	}
//
//	printf("\ntempArray \t %p \n", tempArray);
//	printf("*tempArray \t %d \n", *tempArray);
//	printf("*(tempArray+2) \t %d \n", *(tempArray+2));
//
//	//malloc - get memmory from heap
//	int * points;
//	points = malloc(5 * sizeof(int)); //get extra memory
//	free(points); //release extra memory
//
//	return 0;
//}