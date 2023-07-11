#include<cstdio>
int main()
{
	int H,W; scanf("%d %d",&H, &W);
	int arr[H+1][W+1];
	int num = 1;
	/*
	1,1 > 2,1 > 1,2 > 3,1 > 2,2 > 1,3
	합이 작은 순서대로 , 합이 같다면 col이 작은 순서대로  
	*/
	for(int plus = 2; plus <= H+W; plus++) // 합은 2 ~ H+W 의 값을 가짐  
	{
		for(int col = 1; col <= W; col++) // 합이 같다면 col가 작은 순서대로  
		{
			int row = plus - col; // plus = row + col
			if(row <= 0 || row > H) continue; // row, col 이 범위밖이라면 pass 
			arr[row][col] = num++;
		}
	}
	
	//배열 출력 
	for(int row = 1; row <= H; row++)
	{
		for(int col = 1; col <= W; col++)
		{
			printf("%d ", arr[row][col]);
		}
		printf("\n");
	}
}
