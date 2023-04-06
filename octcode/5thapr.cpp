#include<bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("avx2") 
using namespace std;
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
// #define int long long
const int32_t M = 1e9+7;


void printv(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}


signed main(){

	io;
	int t;
	cin>>t;
	while(t--){
		long long n;
        cin >> n;
        vector<int>b(n);
        for(int i=0;i<n-1;i++){
        	int x;
        	cin>>x;
        	b[i]=x;
        }
        vector<int>a(n);
        for (int i = 1; i < n-2; ++i)
        {
        	// if(b[i]<b[i+1]){
        		b.insert(b.begin()+i,0);
        		break;
        	// }

        }
        b.pop_back();
        printv(b);

	}
	return 0;		
}
