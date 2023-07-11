#include<cstdio>
int main()
{
	int M,N,W,H; scanf("%d %d %d %d",&M,&N,&W,&H);
	int arr[N+1][M+1];
	int max = 0;
	for(int row = 1; row <= N; row++) for(int col = 1; col <= M; col++)
		scanf("%d", &arr[row][col]);
	
	for(int row = 1; row <= N; row++)
		for(int col = 1; col <=M; col++)
		{ 
			//row,col ~ row+H-1,col+W-1 �˻�  
			if(row + H - 1 > N || col + W - 1 > M) // ���� ��(OutOfBounds = OOB) 
				continue;
			
			int sum = 0;
			for(int x = row; x < row + H; x++) // row,col ~ row+H-1,col+W-1 �� ���ϱ�  
				for(int y = col; y < col + W; y++)
					sum += arr[x][y];
					
			if(max < sum) max = sum;
		}
	printf("%d", max);
}
