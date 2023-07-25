#include<cstdio>
void bin(int x)
{
	if(x<=1) printf("%d", x);
	else {bin(x/2); printf("%d", x%2);}
}
int main()
{
	int n; scanf("%d", &n);
	bin(n);
}
