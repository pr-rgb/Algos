
/* BUBBLE SORT */

#include <stdio.h>
#include <stdlib.h>

void Bubble_sort(int arr[], int arr_size)
{
	int i,j;
        int temp;
	printf("Enter sorting\n");
        for(i=0; i<arr_size; i++){
	
		for(j=0; j<arr_size-i-1; j++){
			
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}

	}	

	printf("Bubble Sorted array : \n");
	for(i=0;i<arr_size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}


int main()
{
	int arr[5];
	int size,i;

        printf("Enter array elements\n");
	size = sizeof(arr)/sizeof(arr[0]);

	for(i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}

	Bubble_sort(arr,size);
	return 0;	
}
