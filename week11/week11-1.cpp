/// week11-1.cpp
///函式/函數 function
#include <stdio.h>
int addnum(int a, int b)
{
    printf("在函式addnum()裡, 得到的參數a:%d b:%d\n", a, b);
    int ans = a + b;
    printf("算出答案 %d 要 return 出去喔\n", ans);
    return ans;
}
int main()
{
    printf("在 main() 呼叫使用 addnum() \n");
    int ans =addnum(2, 3);
    printf("在 main()得到答案:%d\n", ans);
}
