#include<cstdio>
int main()
{
	int N; scanf("%d",&N);
	int arr[N+1][N+1];
	int num = 1;
	for(int row=1; row<=N; row++){
		if(row%2 == 1)	{ // Ȧ����° ���� ���ʿ��� ����������  
			for(int col = 1; col <= N; col++)	{
				arr[row][col] = num++;
			}
		}
		else { // ¦����° ���� �����ʿ��� ��������  
			for(int col = N; col >= 1; col--)	{
				arr[row][col] = num++;
			}
		}
	}
	
	//�迭 ��� 
	for(int row=1; row<=N; row++){
		for(int col = 1; col <= N; col++)	{
			printf("%d ", arr[row][col]);
		}
		printf("\n");
	}
}
