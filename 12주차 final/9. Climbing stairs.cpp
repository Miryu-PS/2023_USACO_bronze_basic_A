#include<cstdio>
int arr[100005]={1,1,2,4};
int main()
{
	int N; scanf("%d" , &N);
	for(int i=4; i<=N; i++)
	{
		arr[i] = arr[i-1]+arr[i-2]+arr[i-3];
		arr[i] %= 1000;
	}
	printf("%d", arr[N]);
}
