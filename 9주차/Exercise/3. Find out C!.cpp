#include<string>
#include<iostream>
using namespace std;
int main()
{
	string s; cin>>s;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i] == 'c') s[i] = 'C';
	}
	int numC = 0, numCC = 0;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i] == 'C') numC++;
	}
	for(int i=0; i<s.size()-1; i++)
	{
		if(s[i] == 'C' && s[i+1] == 'C') numCC++;
		// or if(s.substr(i,2) == "CC")
	}
	cout<<numC<<'\n'<<numCC;
}
