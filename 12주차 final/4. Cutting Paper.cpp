#include<cstdio>
int main()
{
	int H,W; scanf("%d %d", &W, &H);
	for(int i=1; i<=H; i++)
	{
		for(int j=1; j<=W; j++)
		{
			if((i==1||i==H) && (j==1||j==W)) printf("+");
			else if(i==1||i==H) printf("-");
			else if(j==1||j==W) printf("|");
			else printf(" ");
		}
		printf("\n");
	}
}
