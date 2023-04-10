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
	string s;
	cin>>s;

	vector<string> words;
    size_t start = 0;
    while (true)
    {
        size_t end = s.find("WUB", start);
        if (end == string::npos)
        {
            words.push_back(s.substr(start, end));
            break;
        }
        if (end != start)
        {
            words.push_back(s.substr(start, end - start));
        }
        start = end + 3;
    }

    if (!words.empty())
    {
        cout << words[0];
    }
    for (size_t i = 1; i < words.size(); ++i)
    {
        cout << " " << words[i];
    }
    cout << endl;

    return 0;


}
