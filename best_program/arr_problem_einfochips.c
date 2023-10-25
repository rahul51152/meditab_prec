#include<stdio.h>
//out put : 1,1,1,1,4,3,1,0,5,4,
void fun(int *arr,int size,int x){
    int k=0;
    for(int i=0;i<size;i++){
        if(arr[i] == x){
            for(int j=i;j>0;j--){
                arr[j] = arr[j-1];
            }
            arr[0] = 1;
        }
    }
}

int main(){
    int arr[10]= {4,3,2,2,2,1,0,5,2,4};
    fun(arr,10,4);
    for(int i=0;i<10;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");
    return 0;
}
