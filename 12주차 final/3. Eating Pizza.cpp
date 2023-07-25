#include<cstdio>
int main()
{
	int arr[8];
	for(int i=0; i<8; i++) scanf("%d", &arr[i]);
	int max = 0;
	for(int i=0; i<8; i++)
	{
		int tmp = 0;
		for(int j=0; j<4; j++)
		{
			tmp += arr[(i+j)%8];
		}
		if(tmp > max) max = tmp;
	}
	printf("%d",max);
}
