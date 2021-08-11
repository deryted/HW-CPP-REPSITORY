#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	string a,b,c="";
	int p=0;
	cin>>a>>b;
	while(a.size()<b.size())a="0"+a;
	while(b.size()<a.size())b="0"+b;
	for(int i=a.size()-1;i>=0;i--)
	{
		c=char((a[i]-'0'+b[i]-'0'+p)%10+'0')+c;
		p=(a[i]-'0'+b[i]-'0'+p)/10;
	}
	if(p==1)c="1"+c;
	cout<<c;
	return 0;
}
