void    ft_ultimate_div_mod(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = temp / *b;
    *b = temp % *b;
}

#include <stdio.h>
int main(void)
{
    int a = 10;
    int b = 3;

    ft_ultimate_div_mod(&a, &b);
    printf("a: %d, b: %d\n", a, b);
}