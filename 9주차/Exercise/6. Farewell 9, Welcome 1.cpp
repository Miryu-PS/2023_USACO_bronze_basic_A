#include<iostream>
#include<string.
using namespace std;
int main()
{
	string s; cin>>s;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i] == '9') // s[i]==9 �� �ƴ�!!
			s[i] = '1'; // s[i] = 1�� �ƴ�!!
	}
	cout<<s;
}
