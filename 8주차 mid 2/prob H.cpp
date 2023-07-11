#include<cstdio>
int main()
{
	int N,K; scanf("%d %d",&N,&K);
	for(int row=1; row<=N; row++)
	{
		for(int col=1; col<=N; col++)
		{
			char p = ' ';
			if(row == 1 || row == N) p = '*'; // 첫 row와 마지막 row라면 * 
			if(col == 1 || col == N) p = '*'; // 첫 col과 마지막 col라면 * 
			if((row+col) % K == 1) p = '*'; // (row+col)%K가 1이라면 * 
			printf("%c",p);
		}
		printf("\n");
	}
}
