#include <stdio.h>

int plus(int a, int b) // a와 b를 parameter로 받아서 a+b를 return 하는 함수, 즉 plus(a,b) 자체가 int 값을 가진다.
{
	return a+b;
}

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d", plus(x,y));
	return 0;
}
