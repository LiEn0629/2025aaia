/// week12-2.cpp
/// Fibonacci �ƦC
///  2 3 5 7 11 13 17 19 23 29 31 ���
/// 1 3 5 7 9 11 13 17 �_��
/// 2 4 6 8 10 12 14 16 ����
/// 1 1 2 3 5 8 13 21 34 �аݤU�@�ӼƦr�O����
/// �e�@�ⶵ�ۥ[
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
