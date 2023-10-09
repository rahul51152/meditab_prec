#include<stdio.h>
#include<stdint.h>
uint32_t reverseBits(uint32_t n) {

    uint32_t temp = 0;
    uint32_t q = 0;
    int m=31;
    int k=1;
    printf("-q---------------------temp-----i-\n");
    for(uint32_t i=0; i<32; i++)
    {
        q = n & 1<<i ;
        printf("q = %d\t",q);
        if(i<=15){
            q = q<<m;
            m=m-2;
            temp = temp+q;
            printf("result = %b %d\n",temp,i);
        }
        else{
            q = q>>k;
            k=k+2;
            temp = temp+q;
            printf("result = %b %d\n",temp,i);
        }
    }
    return temp;
}
int main(){
	uint32_t a = 0b100101010101010111110101010111;
	printf("%d\n",reverseBits(a));
      return 0;
}      
