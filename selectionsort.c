#include <stdio.h>
#include <stdlib.h>

void swap(int arr[], int firstindex, int secondindex){
	  int temp = arr[firstindex];
	  arr[firstindex] = arr[secondindex];
	  arr[secondindex] = temp;
}

int indexOfMin(int arr[], int startindex, int n){

	  int i;
	  int minval = arr[startindex];
	  int minindex = startindex;

	  for(i=minindex+1; i<n; i++){
	      if(arr[i] < minval){
		 minindex = i;
	         minval = arr[i];	 
	      }	      
	  }
	  return minindex;
}

int selectionSort(int arr[], int n){

	  int i;

	  for(i=0; i<n; i++){
	  	int index = indexOfMin(arr,i,n);
		if(i != index)
			swap(arr,i,index);
	  }
}

void printArray(int arr[], int n){
	 int i;
	 printf("Sorted Array \n");
	 for(i=0; i<n; i++){
		printf("%d ",arr[i]);
 	 }
	 printf("\n");
}

int main(){
	int arr[] = {2,1,6,9,4,3};
	printf("Unsorted Array \n");
        printf("2 1 6 9 4 3\n");
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr,n);
	printArray(arr,n);
	return 0;
}
