#include<cstdio>
int main()
{
	int before[26][26], after[26][26];
	for(int row=1; row<=25; row++)
		for(int col=1; col<=25; col++)
			scanf("%d",&before[row][col]);
	for(int row=1; row<=25; row++)
		for(int col=1; col<=25; col++)
		{
			int cnt = 0;
			for(int dx = -1; dx <= 1; dx++) // row-1,col-1 ~ row+1,col+1 �˻�  
				for(int dy = -1; dy <= 1; dy++)
				{
					if(dx==0 && dy==0) continue; // row,col ���� 
					if(row+dx <= 0 || row+dx > 25) continue;
					if(col+dy <= 0 || col+dy > 25) continue;
					cnt += before[row+dx][col+dy];
				}
			if(cnt == 3) after[row][col] = 1; // �ֺ��� 3����� 1�� 
			else if(cnt == 2) after[row][col] = before[row][col]; // �ֺ��� 2����� �״�� 
			else after[row][col] = 0; // �̿ܿ��� �� 0 
		}
	for(int row=1; row<=25; row++)
	{
		for(int col=1; col<=25; col++)
			printf("%d ",after[row][col]);
		printf("\n");
	}
}
