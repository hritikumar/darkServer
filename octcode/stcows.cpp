#include<bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("avx2") 
using namespace std;
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
// #define int long long
const int32_t M = 1e9+7;
const int N= 1e5+10;

int n,cows;
int positions[N];

bool canPlaceCows(int minDis){
	int lastpos=-1;
	int cows_ct=cows;
	for (int i = 0; i < n; ++i)
	{
		if (positions[i]-lastpos>=minDis || lastpos ==-1)
		{
			cows_ct--;
			lastpos=positions[i];
		}
		if (cows_ct==0)
		{
			break;
		}
	}
	return cows_ct==0;

}

signed main(){

	io;
	int t;
	cin>>t;
	while(t--){
		cin >> n >> cows;
		for (int i = 0; i < n; ++i)
		{
			cin >> positions[i];
		}
		sort(positions,positions+n);
		int hi=1e9,lo=0;
		int mid;
		while(hi-lo>1){
			int mid=(hi+lo)/2;
			if (canPlaceCows(mid))
			{
				lo=mid;
			}else{
				hi=mid-1;
			}
		}
		if (canPlaceCows(hi))
		{
			cout<<hi<<endl;
		}else{
			cout<<lo<<endl;
		}

	}
	return 0;
}
