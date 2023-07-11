#include<cstdio>
int main()
{
	int N; scanf("%d",&N);
	int arr[N+1][N+1];
	int num = 1;
	for(int row=1; row<=N; row++){
		if(row%2 == 1)	{ // 홀수번째 줄은 왼쪽에서 오른쪽으로  
			for(int col = 1; col <= N; col++)	{
				arr[row][col] = num++;
			}
		}
		else { // 짝수번째 줄은 오른쪽에서 왼쪽으로  
			for(int col = N; col >= 1; col--)	{
				arr[row][col] = num++;
			}
		}
	}
	
	//배열 출력 
	for(int row=1; row<=N; row++){
		for(int col = 1; col <= N; col++)	{
			printf("%d ", arr[row][col]);
		}
		printf("\n");
	}
}
