#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    const int *pa = &a; //pa를 통해 a값을 바꿀 수 없음. 

    printf("변수 a의 값 : %d\n", *pa);
    pa = &b;
    printf("변수 b의 값 : %d\n", *pa);
    pa=&a;
    a = 20;
    printf("변수 a의 값 : %d\n", *pa);

    return 0;
}