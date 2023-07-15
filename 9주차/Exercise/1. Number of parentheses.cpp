#include<iostream>
#include<string>
using namespace std;
int main()
{
	string S; cin>>S;
	int open = 0, close = 0;
	for(int i=0; i<S.size(); i++)
	{
		if(S[i] == '(') open++;
		else close++;
	}
	cout<<open<<" "<<close;
}
