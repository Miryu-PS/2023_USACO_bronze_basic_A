#include <stdio.h>
int n; // global variable �������� ��� �Լ����� ���� ����
/*
	f(5) : n n-1 n-2 ... 7 6 5 ���
		 : f(6) "5 "
	f(6) : n n-1 n-2 ... 7 6 ���
			f(7) "6 "
			 
	f(k) : f(k+1) "k "
*/
void f(int k) // f(k) : n���� k���� ���
{
	if(k == n) {printf("%d ", k); return;}
	else{
		f(k+1);
		printf("%d ", k);
	}
	
    /* Your code here */ 
}

int main()
{
    scanf("%d", &n);
    f(1); // n n-1 n-2 ..... 1 // f(x)�� n���� x���� ���
    return 0;
}
