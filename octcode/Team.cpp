#include <bits/stdc++.h>
using namespace std;

int getItDone(){
	int a,b,c;
	int num=0;
	cin>>a>>b>>c;
	if (a+b+c>=2)
	{
		num++;
		return num;
	}
	return 0;

}

int main()
{
	int t;
	cin >> t;
	long long count=0;
	while (t--)
	{
		int ct=getItDone();
		count+=ct;
	}

	cout<<count<<endl;

}
