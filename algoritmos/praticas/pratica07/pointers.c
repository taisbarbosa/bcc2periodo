#include <stdio.h>

int main()
{
    int a = 5;
    char b = 'a';
    int c = 10;

    printf("%p | %d\n", &a, a);
    printf("%p | %c\n", &b, b);
    printf("%p | %d\n", &c, c);

    int* p_a = &a;

    printf("%p\n", p_a);
    printf("%d\n", p_a);
    printf("%ld\n", p_a);

    *p_a = 0;
    
    printf("%p | %d\n", &a, a);
    printf("%p | %p\n", &p_a, *p_a);

    return 0;
}
