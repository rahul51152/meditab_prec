#include <stdio.h>
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
int even_odd(int *arr,int l){
        int temp[l+1];
        int k=0;
        for(int i=0;i<l+1;i++){
                if(arr[i]%2==0){
                        temp[k] = arr[i];
                        k++;
                }
        }
        int ret = k-1;
        for(int i=0;i<l+1;i++){
                if(arr[i]%2!=0){
                        temp[k] = arr[i];
                        k++;

                }
        }
        for(int i=0;i<l+1;i++){
                arr[i] = temp[i];
        }
        return ret;
}

int main(){
    int t;
    scanf("%d",&t);
    int h;
    while(t--){
        scanf("%d",&h);
        int arr[h];
        for(int i=0;i<h;i++){
            scanf("%d",&arr[i]);
        }
        int ret = even_odd(arr,h-1);
        merge_sort(arr,0,ret);
        merge_sort(arr,ret+1,h-1);
        for(int i=0;i<h;i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}

