#include<stdio.h>
#include<string.h>
void merge(int *arr,int l,int m,int h){
	int i = l;
	int j = m+1;
	int k = l;
	int temp[h+1];
	while(i<=m && j<=h){
		if(arr[i]<arr[j]){
			temp[k] = arr[i];
			k++;
			i++;
		}
		else{
			temp[k] = arr[j];
			k++;
			j++;
		}
	}
	while(i<=m){
		temp[k] = arr[i];
		k++;
		i++;
	}
	while(j<=h){
		temp[k] = arr[i];
		k++;
		j++;
	}
	for(int z = l; z<=h ; z++ ){
		arr[z] = temp[z];
	}
}

void merge_sort(int *arr,int l,int h){
	if(l<h){
		int m =(l+h)/2;
		merge_sort(arr,l,m);
		merge_sort(arr,m+1,h);
		merge(arr,l,m,h);
	}
}

int main(){
	int arr[] = {9,7,3,2,6};
      	merge_sort(arr,0,4);
	for(int i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
