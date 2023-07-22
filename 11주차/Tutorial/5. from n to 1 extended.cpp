#include <stdio.h>
int n; // global variable 전역변수 모든 함수에서 접근 가능
/*
	f(5) : n n-1 n-2 ... 7 6 5 출력
		 : f(6) "5 "
	f(6) : n n-1 n-2 ... 7 6 출력
			f(7) "6 "
			 
	f(k) : f(k+1) "k "
*/
void f(int k) // f(k) : n부터 k까지 출력
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
    f(1); // n n-1 n-2 ..... 1 // f(x)는 n부터 x까지 출력
    return 0;
}
