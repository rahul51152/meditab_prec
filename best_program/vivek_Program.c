#include<stdio.h>
int i=0;

void append(int *arr,int value);
void insert(int *arr,int index,int value);
void remove(int *arr,int index,int value);
void pop(int *arr);
void reverse(int *arr);
void sort(int * arr,int order); //1->ascending order 2-> descending order
void count(int *arr,int value);
void clear(int * arr);
void extend(int *arr1,int *arr2);
void print(int *arr);

int main(){
	int arr[10];
	append(arr,10);
	append(arr,20);
	append(arr,30);
	append(arr,40);
	printf("%d %d %d %d\n",arr[0],arr[1],arr[2],arr[3]);
	return 0;
}

void append(int *arr,int value){
        arr[i] = value;
        i++;
}

void insert(int *arr, int index,int value){
	arr[index] = value;
	i=index;
	i++;
}

void remove(int *arr,int index,int value){
	arr[index] = value;
	i=index;
	i--;
}

void pop(int * arr){
	arr[i]=0;
	i--;
}

void reverse(int *arr){
	int j,k;
	for(j=0,k=i-1;j<k;j++,k--){
		int temp = arr[j];
		arr[j] = arr[k];
		arr[k] = temp;
	}
}

void sort(int *arr,int order){
	if(order ==1){
		for(int j=0;j<i-1;j++){
			for(int k=j+1;k<i;k++){
			       if(arr[j]>arr[k]){
			       int temp = arr[k];
				arr[k]  = arr[j];
		 		arr[j]		


