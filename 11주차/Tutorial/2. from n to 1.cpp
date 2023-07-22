#include <stdio.h>
void f(int n)
{
	if(n==0) return;
	printf("%d ", n);
	f(n-1);
}


int main()
{
    int n; // 지역변수 local variable 선언된 곳에서만  
    scanf("%d", &n);
    f(n);
    return 0;
}


/*
 f(8) -> "8 7 6 5 4 3 2 1" 을 출력
      == "8 " 를 출력하고 f(7)을 실행
 void f(int x) // x부터 1까지 출력
 {
 	//termination case // base case
	if(x==0) {return ;}
	 printf("%d ", x);
	 f(x-1);
 }*/
	 
