#include<cstdio>
int main()
{
	char c; scanf("%c",&c);
	int a = c - 'A' + 10; // 16���� ���ĺ� c�� ���� a��
	 
	for(int i=1; i<=15; i++) // a * i = (a*i) �� ǥ�� 
	{
		int mul = a*i;
		int mul1 = a*i/16;
		int mul2 = a*i%16;
		char p,p1,p2; // c * p = p1p2
		
		if(i<=9) p = i+'0'; // i�� 16������ ǥ���� p 
		else p = i-10+'A';
		
		if(mul1 <= 9) p1 = mul1 + '0'; // mul1�� 16������ ǥ���� p1
		else p1 = mul1-10+'A';
		
		if(mul2 <= 9) p2 = mul2 + '0'; // mul2�� 16������ ǥ���� p2 
		else p2 = mul2-10+'A';
		
		printf("%c*%c=%c%c\n", c,p,p1,p2);
	}
}
