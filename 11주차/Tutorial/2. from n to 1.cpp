#include <stdio.h>
void f(int n)
{
	if(n==0) return;
	printf("%d ", n);
	f(n-1);
}


int main()
{
    int n; // �������� local variable ����� ��������  
    scanf("%d", &n);
    f(n);
    return 0;
}


/*
 f(8) -> "8 7 6 5 4 3 2 1" �� ���
      == "8 " �� ����ϰ� f(7)�� ����
 void f(int x) // x���� 1���� ���
 {
 	//termination case // base case
	if(x==0) {return ;}
	 printf("%d ", x);
	 f(x-1);
 }*/
	 
