#include <stdio.h>
int bin_count(int num){
    int count=0;
    while(num!=0){
        int rem = num%2;
        if(rem == 1){
            count++;
        }
        num/=2;
    }
    return count;
}

int main()
{
    int num=32;
    int max = bin_count(num);
    int number = num;
    while(number){
        if(bin_count(number) == max && number<num){
            printf("%d\n",number);
            break;
        }
        number--;
    }
    return 0;
}

