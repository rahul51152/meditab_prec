#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}

int partition(int *arr,int low,int high){
	int pivot = arr[high];
	int i=low;
	for(int j = low;j<high;j++){
		if(arr[j]<pivot){
			swap(&arr[i],&arr[j]);
			i++;
		}
	}
	swap(&arr[i],&arr[high]);
	return i;
}

void quicksort(int *arr,int low,int high){
	if(low<high){
		int p1 = partition(arr,low,high);
		quicksort(arr,low,p1-1);
		quicksort(arr,p1+1,high);
	}
}
int main(){
	int arr[] = {7,9,3,2,6};
	quicksort(arr,0,4);
	for(int i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
