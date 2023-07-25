#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s; cin>>s;
	int firstA = -1, lastZ;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i] == 'A' && firstA == -1) firstA = i;
		if(s[i] == 'Z') lastZ = i;
	}
	printf("%d", lastZ - firstA + 1);
}
