/// week12-4.cpp
#include <stdio.h>
int fib(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
}
int main()
{
    printf("請輸入數字(ex. 13):");
    int n;
    scanf("%d", &n);

    printf("答案是:%d\n", fib(n));
}
