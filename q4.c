//Find the first element of one array that is not in another Write a function that has two arguments: 
//two integer arrays. The arrays may be of different sizes. The function returns the index of the 
//first value in the first array that is not somewhere in the second array. If all values in the first 
//array are also in the second array, return -1.
//Input:
//Array A:
// 2 2 3 3 7 1 29 19 2 19
// 5
//Array B:
// 29 19 5 3 7 2
//Value 1 is in A but not in B: returns 6
//Array A:
// 2 2 3 3 7 5 29 19 2 19
// 5
//Array B:
// 29 19 5 3 7 2



#include<stdio.h>
#include<string.h>
int miss_element(int *a,int size_a,int *b,int size_b){
	 int count =0;
        for(int i=0;i<size_a;i++){
                for(int j=0;j<size_b;j++){
                        if(a[i]==b[j]){
                                count++;
                        }
                }
                if(count>0){
                        count=0;
                        continue;
                }
                else{
			return i+1;
		}
	}
	return -1;
}

int main(){
	int a1[10] = {2,2,3,3,7,1,29,19,2,1};
	int b1[6] = {29,19,5,3,7,2};
	int a2[10] = {2,2,3,3,7,5,29,19,2,19};
	int b2[6] = {29,19,5,3,7,2};
	printf("%d\n",miss_element(a1,10,b1,6));
	printf("%d\n",miss_element(a2,10,b2,6));
	return 0;
}
