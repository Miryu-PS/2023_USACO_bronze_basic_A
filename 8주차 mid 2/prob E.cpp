#include<cstdio>
int main()
{
	int N, X, Y; scanf("%d %d %d", &N, &X, &Y);
	/*
	X,Y로부터 가로로 몇 칸, 세로로 몇 칸 떨어져있는지 합 + 1을  출력
	
	3 2 3 4
	2 1 2 3
	3 2 3 4
	4 3 4 5	
	*/
	for(int row=1; row<=N; row++)
	{
		for(int col=1; col<=N; col++)
		{
			int tmp = 1;
			//세로로 몇 칸 떨어졌는지 더하기 
			if(row >= X) tmp += row-X;
			else tmp += X-row;
			
			//가로로 몇 칸 떨어졌는지 더하기 
			if(col >= Y) tmp += col-Y;
			else tmp += Y-col;
			
			printf("%d ", tmp);
		}
		printf("\n");
	}
}
