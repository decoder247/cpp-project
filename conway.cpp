#include <string>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sz = 100;
    int a[sz];

    for(int i = 0; i < sz; ++i) {
        a[i] = i * i;
    }

    printf("hello world!");
    
}