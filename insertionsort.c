//INSERTION SORTING ALGORITHM.
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
void insertionsort(int n){

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

}

int main(){

	display();
	insertionsort(MAX-1);
	return 0;
}
