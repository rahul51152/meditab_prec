//Check that the elements of an array are in ascending order write function that checks that the 
//elements of an array are in ascending order. Return 0 if the array is in order; otherwise, return 
//the number of elements that are out of order. Here are some sample runs:
//Inputs:
// 1 2 3 4 6 7 8 7 10 11 13 20 31 41 41 45 50 53 52 52
// 3 elements out of order. Returns 3
// 1 1 1 4 6 7 8 8 10 11 13 20 31 41 41 45 50 51 52 52
//All elements are in order. Returns 0.

#include<stdio.h>
#include<string.h>
int ord(int *arr,int numsSize){
	int max = arr[0];
	int count=0;
	for(int i=1; i<numsSize;i++){
		if(arr[i]>=max){
			max = arr[i];
		}
		else{
			count++;
		}
	}
	return count;
}
			

int main(){
	int arr1[20] = {1,2,3,4,6,7,8,7,10,11,13,20,31,41,41,45,50,53,52,52};
	int arr2[20] = {1,1,1,4,6,7,8,8,10,11,13,20,31,41,41,45,50,51,52,52};
	printf("%d\n",ord(arr1,20));
	printf("%d\n",ord(arr2,20));
	return 0;
}
