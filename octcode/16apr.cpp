#include<bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("avx2") 
using namespace std;
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
// #define int long long
const int32_t M = 1e9+7;


signed main(){

	io;
	int t;
	cin>>t;
	multimap<int,int>map;
	for (int i = 0; i < t; ++i)
	{
		int hrs,min;
		cin>>hrs>>min;
		map.insert({hrs,min});			
	}
	int count=1;
	int ans=1;
	for(auto it=map.begin();it!=--map.end();++it){
		auto it1=++it;
		it--;
		if (it->first==(it1)->first && it->second==(it1)->second)
		{
			count++;
		}
		else{
			ans=max(ans,count);
			count=1;
		}
	}
	ans=max(ans,count);
	cout<<ans;
	// if(count==1) cout<<count;
	// else cout<<++count;


	return 0;
}
