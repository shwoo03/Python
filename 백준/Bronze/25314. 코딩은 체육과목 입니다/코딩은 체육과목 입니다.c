#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < (n / 4); i++)
    {
        printf("long ");
    }

    printf("int");

    return 0;
}