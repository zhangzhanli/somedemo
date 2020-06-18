#include "stdio.h"

char seps[]="\0wy";
char bases[]="0sbq";
char nums[]="0123456789";



void f(unsigned long long a, int b, int l){
    if (a ==0)
        return;
    f(a / 10, b+1, a % 10);


    if (b % 4 == 0){
        if (a % 10){
            printf("%c", nums[a%10]);
        }
        printf("%c",seps[b/4]);
    }else{
        if (a % 10){
            printf("%c", nums[a%10]);
            printf("%c", bases[b % 4]);
        } else if ((l ? 1 : 0) ^ 0){
            printf("l");
        }
    }
}

void f2(long long  c){
    if (c < 0){
        printf("fd");
        c = -c;
    }
    f(c, 0, 0);

}

int main(int argc, char *argv[])
{
    f2(-90108050905);
    return 0;
}
