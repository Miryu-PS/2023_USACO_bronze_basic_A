#include<cstdio>
int main()
{
	int D; scanf("%d", &D);
	int cnt = 0;
	for(int i=1; i<=5; i++)
	{
		int x,y; scanf("%d %d",&x,&y);
		if(x*x+y*y <= D*D) cnt++;
	}
	printf("%d", cnt);
}
