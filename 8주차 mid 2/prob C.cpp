#include<cstdio>
int main()
{
	int H,W; scanf("%d %d",&H, &W);
	int arr[H+1][W+1];
	int num = 1;
	/*
	1,1 > 2,1 > 1,2 > 3,1 > 2,2 > 1,3
	���� ���� ������� , ���� ���ٸ� col�� ���� �������  
	*/
	for(int plus = 2; plus <= H+W; plus++) // ���� 2 ~ H+W �� ���� ����  
	{
		for(int col = 1; col <= W; col++) // ���� ���ٸ� col�� ���� �������  
		{
			int row = plus - col; // plus = row + col
			if(row <= 0 || row > H) continue; // row, col �� �������̶�� pass 
			arr[row][col] = num++;
		}
	}
	
	//�迭 ��� 
	for(int row = 1; row <= H; row++)
	{
		for(int col = 1; col <= W; col++)
		{
			printf("%d ", arr[row][col]);
		}
		printf("\n");
	}
}
