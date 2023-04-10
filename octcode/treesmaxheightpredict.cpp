#include<bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("avx2") 
using namespace std;
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
// #define int long long
const int32_t M = 1e9+7;


// void printv(vector<int> &v){
// 	for(int i=0;i<v.size();i++){
// 		cout<<v[i]<<" ";
// 	}
// 	cout<<endl;
// }
const int N = 1e6+10;

int n;
ll m;
ll trees[N];

bool isWoodSufficient(int h){
	long long wood=0;
	for (int i = 0; i < n; ++i)
	{
		if (trees[i]>=h)
		{
			wood+=(trees[i]-h);
		}
	}
	return wood>=m;
}

signed main(){

	io;
	cin>>n>>m;
	for (int i = 0; i < n; ++i)
	{
		cin>>trees[i];
	}
	ll lo=0,hi=1e9,mid;
	while(hi-lo>1){
		mid=(hi+lo)/2;
		if (isWoodSufficient(mid))
		{
			lo=mid;	
		}else{
			hi=mid-1;
		}
	}
	if (isWoodSufficient(hi))
	{
		cout<<hi<<endl;
	}else{
		cout<<lo<<endl;
	}
}
