#include<cstdio>
void star(int x) {
	if(x==0) return ;
	printf("*");
	star(x-1); 
}// ���� x�� ����ϴ� �Լ�
void f(int x) // 1������ x������ ���
{
	if(x == 1) printf("*");
	else {
		f(x-1); // 1~(x-1)��
		printf("\n");
		star(x); // ���� x��
	}
}
int main()
{
	int n; scanf("%d", &n);
	f(n);
}

/* 
star(x): ���� x�� ����ϴ� �Լ� star(x-1) "*" ���
f(x) : 1������ x������ : f(x-1) �ٹٲ� star(x)
f(3) : 1~2�� �ٹٲ� ��3
*/




