#include<stdio.h>
int i=0;

void append(int *arr,int value);

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
