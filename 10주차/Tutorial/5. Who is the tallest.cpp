#include <stdio.h>

int n;
int height[100000];

int whoIsBig()
{
	int max = 0, who = -1;
	for(int i=0; i<n; i++)
	{
		if(max < height[i])
		{
			max = height[i];
			who = i;
		}
	}
	return who+1;
}

int main()
{
	int i;
	
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &height[i]);
	}
	
	printf("%d", whoIsBig());
	
	return 0;
}
