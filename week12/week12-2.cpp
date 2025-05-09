/// week12-2.cpp
/// Fibonacci 计
///  2 3 5 7 11 13 17 19 23 29 31 借计
/// 1 3 5 7 9 11 13 17 计
/// 2 4 6 8 10 12 14 16 案计
/// 1 1 2 3 5 8 13 21 34 叫拜计琌ぐ或
/// 玡ㄢ兜
#include <stdio.h>
int main()
{
    int a[30] = {0, 1};
    printf("1 ");
    for(int i=2; i<30; i++){
        a[i] = a[i-1] + a[i-2];
        printf("%d ", a[i] );
    }
}
