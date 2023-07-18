#include <stdio.h>

int abs(int n)
{
    if(n>=0) return n;
	else return -n;
}

int main()
{
    int n;
    
    scanf("%d", &n);
    
    printf("%d", abs(n));
    
    return 0;
}
