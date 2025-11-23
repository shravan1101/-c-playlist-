#include <stdio.h>

int pre_define(int n)
{
    return n * n;
}
int main()
{
    int n;
    printf("enter number to Square");
    scanf("%d", &n);
    int final = pre_define(n);
    printf("%d", final);
    return 0;
}