#include <stdio.h>

void f(int n) // n���� ��µǴ� ���� ���
// f(9) -> "9 " "10 " f(5)...
{
    printf("%d ", n);
	if(n==1) return;
	if(n%2 == 0) f(n/2);
	else f(n+1);
}

int main()
{
    int n;
    
    scanf("%d", &n);
    
    f(n);
    
    return 0;
}
