#include<cstdio>
int main()
{
	int N; scanf("%d", &N);
	int R = (N-1)/2;
	for(int i=-R; i<=R; i++)
	{
		for(int j=-R; j<=R; j++)
		{
			if(i*i+j*j <= R*R) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
