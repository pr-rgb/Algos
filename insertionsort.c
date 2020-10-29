#include <stdio.h>
#include <stdlib.h>

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n){
	int i, key, j;
	for(i=1; i<n; i++) {
	   key = arr[i];
	   printf("Key : %d\n",key);
	   j = i-1;

	   while(j >=0 && arr[j] > key) {
		arr[j+1] = arr[j];
		printf("arr[%d] : %d\n",j+1,arr[j+1]);
		j = j-1;
           }
	   arr[j+1] = key;
	   printf("##arr[%d] : %d\n\n",j+1,arr[j+1]);
	}
}

void printArray(int arr[], int n){
	int i;
	for(i=0; i<n; i++)
	   printf("%d ",arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = {12,11,13,5,6};
	printf("Array : 12,11,13,5,6 \n");
	int n = sizeof(arr)/sizeof(arr[0]);

	insertionSort(arr,n);
	printArray(arr,n);
	return 0;
}
