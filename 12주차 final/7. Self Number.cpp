#include<cstdio>
int main()
{
	int a,b; scanf("%d %d", &a, &b);
	int arr[5050]={};
	for(int i=1; i<=b; i++)
	{
		int tmp = i;
		tmp += i%10;
		tmp += (i/10)%10;
		tmp += (i/100)%10;
		tmp += i/1000;
		arr[tmp] = 1;
	}
	int ans = 0;
	for(int i=a; i<=b; i++)
	{
		if(arr[i] == 0) ans += i;
	}
	printf("%d", ans);
}
