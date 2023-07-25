#include<cstdio>
int main()
{
	int H,M; scanf("%d %d", &H, &M);
	if(M>=45) M-=45;
	else H--, M+=15;
	if(H<0) H+=24;
	printf("%d %d", H,M);
}
