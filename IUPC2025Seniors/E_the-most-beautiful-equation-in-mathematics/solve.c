#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        if(n % 2 == 0){
            printf("%d\n", 2);
        }else{
            printf("%d\n", 0);
        }
    }
    return 0;
}