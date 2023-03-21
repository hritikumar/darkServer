#include <bits/stdc++.h> 
#define ll long long 
using namespace std; 
int mod = 1000000007; 
void dhoni() 
{ 
    int n; 
    cin >> n; 
    ll a[n + 1]; 
    ll b[n + 1]; 
 
    ll sumx = 0; 
    ll sumy = 0; 
    ll sqsumx = 0; 
    ll sqsumy = 0; 
 
    for (int i = 1; i <= n; i++) 
    { 
        cin >> a[i] >> b[i]; 
        sumx = (sumx + a[i]) % mod; 
        sumy = (sumy + b[i]) % mod; 
        sqsumx = (sqsumx + (a[i] * a[i])) % mod; 
        sqsumy = (sqsumy + (b[i] * b[i])) % mod; 
    } 
 
    int q; 
    cin >> q; 
    ll sum = 0; 
 
    for (int i = 1; i <= q; i++) 
    { 
        ll x, y; 
        cin >> x >> y; 
        ll ans = 0; 
        ll val1 = (x * x); 
        val1 = ((n % mod) * (val1 % mod)) % mod; 
 
        ll val2 = (y * y); 
        val2 = ((n % mod) * (val2 % mod)) % mod; 
 
        ans = (val1 + val2) % mod; 
 
        ans = (ans + sqsumx) % mod; 
        ans = (ans + sqsumy) % mod; 
 
        ll val3 = (((x % mod) * (sumx) % mod) % mod) + (((y % mod) * (sumy) % mod) % mod); 
 
        ans = ((ans - (2 * val3))) % mod; 
        if (ans < 0) 
        { 
            ans = ans + mod; 
            ans %= mod; 
        } 
        sum = (sum + ans) % mod; 
    } 
    cout << sum << endl; 
} 
 
int main() 
{ 
    int testcases; 
    cin >> testcases; 
    for (int i = 1; i <= testcases; i++) 
    { 
 
        cout << "Case #" << i << ":" 
             << " "; 
        dhoni(); 
    } 
}
