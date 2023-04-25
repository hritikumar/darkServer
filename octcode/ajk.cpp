// #include<bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("avx2") 
// using namespace std;
// #define ll long long
// #define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define pb push_back
// // #define int long long
// const int32_t M = 1e9+7;

// void printBinary(int num){
// 	for (int i = 10; i >=0 ; --i)
// 	{
// 		cout<<((num>>i)&1);
// 	}
// 	cout<<endl;
// }

// signed main(){

// 	io;
	
// 	return 0;

// }

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numTestCases;
    cin >> numTestCases;

    while (numTestCases--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << "1\n";
            continue;
        }

        if (n & 1) {
            cout << "-1\n";
            continue;
        }

        vector<int> a(n);
        for (int i = 0; i < n / 2; i++) a[2 * i] = i, a[2 * i + 1] = n - i - 1;

        int currentSum = 0;
        cout << n << " ";

        for (int i = 0; i < n - 1; i++, currentSum += i) cout << (a[i + 1] - a[i] + n) % n << " ";

        cout << endl;
    }

    return 0;
}
