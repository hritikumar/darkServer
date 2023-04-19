#include<bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("avx2") 
using namespace std;
#define ll long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
// #define int long long
const int32_t M = 1e9+7;

void printBinary(int num){
	for (int i = 10; i >=0 ; --i)
	{
		cout<<((num>>i)&1);
	}
	cout<<endl;
}

signed main(){

	io;
	printBinary(13);
	int a=13;
	// int i=1;
	// if((a & (1<<i)) !=0){
	// 	cout<<"set bit"<<endl;
	// }else cout<<"not set bit";
	//set
	printBinary(a | (1<<1));
	//unset
	printBinary(a & (~(1<<3)));
	//toggle xor
	printBinary(a ^(1<<2));
	// int p=9 & ~(1<<3);
	// printBinary(p);
	int count=0;
	for (int i = 31; i >=0 ; --i)
	{
		if ((a & (1<<i)) !=0)
		{
			count++;
		}
	}
	cout<<count<<endl;
	cout<<__builtin_popcount(a)<<endl;
	cout<<__builtin_popcountll((1ll<<35)-1);



	return 0;
}
