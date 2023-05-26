#include<bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("avx2") 
using namespace std;
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
// #define int long long
const int32_t M = 1e9+7;

// void printBinary(int num){
// 	for (int i = 10; i >=0 ; --i)
// 	{
// 		cout<<((num>>i)&1);
// 	}
// 	cout<<endl;
// }

signed main(){

	io;

	int n;
	cin>>n;
	vector<int> masks(n,0);
	for (int i = 0; i < n; ++i)
	{
		int num_workers;
		cin>>num_workers;
		int mask=0;
		for (int i = 0; i < num_workers; ++i)
		{
			int day;
			cin>>day;
			// days[i].push_back(day);
			mask=(mask | (1<<day));
		}
		masks[i]=mask;
	}
	int max_days=0;
	for (int i = 0; i < n; ++i)
	{
		for (int  j= i+1; j < n; ++j)
		{
			 int intersection =(masks[i] &masks[j]);
			 int common_days= __builtin_popcount(intersection);
			 max_days=max(max_days,common_days);
			 // cout<<i<<" "<<j<<" "<<common_days<<endl;

		}
	}
	cout<<max_days;
	return 0;
}
