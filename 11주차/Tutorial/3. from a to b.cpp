#include <stdio.h>

void f(int a, int b)
{
	if(a==b) {printf("%d ", a);}
	else
	{
		printf("%d ", a);
		f(a+1, b);
	}
	
}

int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    f(a, b);
    
    return 0;
}
