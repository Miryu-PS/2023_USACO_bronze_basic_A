#include <stdio.h>

int plus(int a, int b) // a�� b�� parameter�� �޾Ƽ� a+b�� return �ϴ� �Լ�, �� plus(a,b) ��ü�� int ���� ������.
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
