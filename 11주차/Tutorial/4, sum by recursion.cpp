#include <stdio.h>
/*
sum(8) = sum(7)+8
sum(7) = sum(6)+7
sum(x) = sum(x-1)+x
*/
int sum(int n)
{
    if(n==1) return 1;
	return sum(n-1)+n;
}

int main()
{
    int n;
    
    scanf("%d", &n);
    
    printf("%d", sum(n));
    
    return 0;
}
