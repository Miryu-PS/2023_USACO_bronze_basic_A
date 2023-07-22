#include<cstdio>
int move(int N){return N?2*move(N-1)+1:0;} // ���� ¥����! 
void hanoi(int N, int from, int to)
// 1~N�� from ��տ��� to ������� �ű�� ������ ���
{
	if(N==0) return;
	//1+2+3 == from+to+other
	int other = 6 - from - to;
	hanoi(N-1, from, other);
	printf("%d %d\n", from, to);
	hanoi(N-1, other, to);
}
int main()
{
	int N; scanf("%d",&N);
	hanoi(N, 1, 3);
}
