#include<cstdio>
void star(int x) {
	if(x==0) return ;
	printf("*");
	star(x-1); 
}// 별을 x개 출력하는 함수
void f(int x) // 1층부터 x층까지 출력
{
	if(x == 1) printf("*");
	else {
		f(x-1); // 1~(x-1)층
		printf("\n");
		star(x); // 별을 x개
	}
}
int main()
{
	int n; scanf("%d", &n);
	f(n);
}

/* 
star(x): 별을 x개 출력하는 함수 star(x-1) "*" 출력
f(x) : 1층부터 x층까지 : f(x-1) 줄바꿈 star(x)
f(3) : 1~2층 줄바꿈 별3
*/




