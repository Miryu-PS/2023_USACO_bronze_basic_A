#include<cstdio>
int main()
{
	int N, X, Y; scanf("%d %d %d", &N, &X, &Y);
	/*
	X,Y�κ��� ���η� �� ĭ, ���η� �� ĭ �������ִ��� �� + 1��  ���
	
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
			//���η� �� ĭ ���������� ���ϱ� 
			if(row >= X) tmp += row-X;
			else tmp += X-row;
			
			//���η� �� ĭ ���������� ���ϱ� 
			if(col >= Y) tmp += col-Y;
			else tmp += Y-col;
			
			printf("%d ", tmp);
		}
		printf("\n");
	}
}
