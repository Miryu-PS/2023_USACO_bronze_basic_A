#include<cstdio>
int main()
{
	int H,W; scanf("%d %d",&H, &W);
	int arr[H+1][W+1];
	int num = 1;
	/*
	H,1 > H-1,1 > H,2 > H-2,1 > H-1,2 > H,3
	
	col - row가 작은 순서대로, 같다면 col이 작은 순서대로  
	*/
	for(int minus = 1-H; minus <= W-1; minus++)
		// minus = col - row
	{
		for(int col = 1; col <= W; col++)
		{
			int row = col - minus; 
			if(row <= 0 || row > H) continue;
			arr[row][col] = num++;
		}
	}
	for(int row = 1; row <= H; row++)
	{
		for(int col = 1; col <= W; col++)
		{
			printf("%d ", arr[row][col]);
		}
		printf("\n");
	}
}
