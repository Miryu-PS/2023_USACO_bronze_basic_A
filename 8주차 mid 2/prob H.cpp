#include<cstdio>
int main()
{
	int N,K; scanf("%d %d",&N,&K);
	for(int row=1; row<=N; row++)
	{
		for(int col=1; col<=N; col++)
		{
			char p = ' ';
			if(row == 1 || row == N) p = '*'; // ù row�� ������ row��� * 
			if(col == 1 || col == N) p = '*'; // ù col�� ������ col��� * 
			if((row+col) % K == 1) p = '*'; // (row+col)%K�� 1�̶�� * 
			printf("%c",p);
		}
		printf("\n");
	}
}
