//INSERTION SORTING ALGORITHM.
//Youtube Channel help: https://www.youtube.com/watch?v=i-SKeOcBwko
//Tutorials Point Help : https://www.tutorialspoint.com/data_structures_algorithms/insertion_sort_algorithm.htm
//WRITTEN ON 14-11-2017
#include <stdio.h>
#include <stdbool.h>
#define MAX 7

int arr[MAX] = {4,6,3,12,1,9,7};

void swap(int x,int y){

	/*printf("\n Before swap: \n");
	printf("arr[%d]=%d\n",x,arr[x]);
	printf("arr[%d]=%d\n",y,arr[y]);*/
	int temp=arr[x];
	arr[x]=arr[y];
	arr[y]=temp;
	/*printf("\n After swap: \n");
        printf("arr[%d]=%d\n",x,arr[x]);
        printf("arr[%d]=%d\n",y,arr[y]);*/


}

void display (){
	printf("\n[");
	for (int i=0;i<MAX;i++)
		printf("%d ",arr[i]);
	printf("]\n");

}
/*void insertionsort(int n){

for (int p=0;p<MAX;p++)
	{
		for (int i=0;i<n;i++)
			{
				if (arr[i]>arr[i+1])
					swap(i,i+1);
				//display();
			
			}
	}
	display();

}*/

void insertionSort(int A[], int n){

	int holePosition;
	int valueToInsert;
	for (int i=0;i<n;i++)
		{
			valueToInsert=A[i];
      			holePosition = i;
			while(holePosition > 0 && A[holePosition-1] > valueToInsert)
				{

					A[holePosition] = A[holePosition-1];
         				holePosition = holePosition -1;

				}
			A[holePosition] = valueToInsert;
		}

}
int main(){

	display();
	insertionSort(arr,MAX);
	display();
	return 0;
}
