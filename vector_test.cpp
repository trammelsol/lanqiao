#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<algorithm> 
#include<sstream>
using namespace std;
int main()
{
	stringstream str;
	string s;
	int n;
	cin>>n;
	for(int i = 10000;i<100000;i++)
	{
		str<<i;
		str>>s;
		if(s[0] == s[4] && s[1] == s[3] && n == (s[0]-48+s[1]-48) * 2 + s[2]-48)
		{
			cout<<i<<endl;
		}
		str.clear();
	}
	for(int i = 100000;i<1000000;i++)
	{
		str<<i;
		str>>s;
		if(s[0] == s[5] && s[1] == s[4] && s[2] == s[3] && n == (s[0]-48+s[1]-48+ s[2]-48) * 2)
		{
			cout<<i<<endl;
		}
		str.clear();
	}
	return 0;
}