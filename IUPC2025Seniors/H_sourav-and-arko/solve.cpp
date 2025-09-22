#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while(test--){
        int n, k;
        scanf("%d %d", &n, &k);
        printf((n % (k + 1))?"Sourav\n":"Arko\n");
    }
    return 0;
}