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

int n, m, a, cur = 1;
__int64 pas = 0;
int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a;
        if (a >= cur) {
            pas += (a - cur);
        } else {
            pas += n - cur + a;
        }
        cur = a;
    }
    cout << pas;
}
