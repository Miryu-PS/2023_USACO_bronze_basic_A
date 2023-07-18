#include <stdio.h>

void star(int n)
{
    for(int i=0; i<n; i++) printf("*");
}

int main()
{
    int n;
    
    scanf("%d", &n);
    
    star(n);
    
    return 0;
}
