#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	
// void printv(vector<int> &v){
// 	for (int i = 0; i < v.size(); ++i){
// 		cout<<v[i]<<" ";
// 	}
// 	cout<<endl;
	
// }
// void print(unordered_map<int,string> &m){
// 	// cout<<m.size()<<endl;
// 	for(auto &val:m){
// 		cout<<val.first<<" "<<val.second<<endl;
// 	}
// }
// void print(multiset<string> &s){
// 	for(auto &val:s){
// 		cout<<val<<endl;
// 	}
// }

	// //episode 28
	// int t;
	// cin>>t;
	// while(t--){
	// 	int n,k;
	// 	cin>>n>>k;
	// 	multiset<long long>m;
	// 	for(int i=0;i<n;++i){
	// 		int x;
	// 		cin>>x;
	// 		m.insert(x);
	// 	}
	// 	long long total=0;
	// 	while(k--){
	// 		auto last_it=(--m.end());
	// 		int cc=*last_it;
	// 		total+=cc;
	// 		m.erase(last_it);
	// 		m.insert(cc/2);
	// 	}
	// 	cout<<total;
	// }
	// episode 28
	// multiset<string>s;
	// s.insert("fgh");
	// s.insert("tggf");
	// s.insert("tggf");
	// s.insert("oiurj");
	// auto it =s.find("tggf");
	// // if(it!=s.end())
	// // 	s.erase(it);
	// s.erase("tggf");

	// print(s);
	// int n;
	// cin>>n;
	// unordered_set<string> s;
	// while(n--){
	// 	string k;
	// 	cin>>k;
	// 	s.insert(k);
	// }
	// int q;
	// cin>>q;
	// while(q--){
	// 	string f;
	// 	cin>>f;
	// 	if(s.find(f)==s.end()){
	// 		cout<<"NO"<<endl;
	// 	}
	// 	else{
	// 		cout<<"YES"<<endl;
	// 	}

	// }
	// for(auto val:s){
	// 	cout<<val<<endl;
	// }

	// s.insert("fgh");
	// s.insert("tggf");
	// s.insert("tggf");
	// s.insert("oiurj");

	// auto it =s.find("tggf");
	// if(it != s.end()){
	// 	// cout<<(*it)<<endl;
	// 	s.erase(it);
	// }
	// print(s);

		//episode 26
	// unordered_map<string,int>um;
	// int n;
	// cin>>n;
	// while(n--){
	// 	string s;
	// 	cin>>s;
	// 	um[s]++;
	// }
	// int q;
	// cin>>q;
	// while(q--){
	// 	string s;
	// 	cin>>s;
	// 	// um[s]++;
	// 	cout<<um[s]<<endl;
	// }
	//episode 25
	// int t;
	// cin>>t;
	// map<string,int>m;
	// while(t--){
	// 	string s;
	// 	cin>>s;
	// 	m[s]++;
	// }
	// for (auto pr :m)
	// {
	// 	cout<<pr.first<<" "<<pr.second<<endl;
	// }

	//stl maps episode 25
	// map<int,string> m;
	// m[1]="hello";//s.size()*log(n)
	// unordered_map<int,string>m;
	// m[1]="tyui";
	// m[2]="hbcubu";
	// m[4]="gddc";
	// m[3]="vutxcghj";
	// m[5]="jcd";
	// m.insert({6,"dfn"});
	// // m[5]="hello";
	// // m.erase(2);
	// auto it = m.find(9);
	// if(it!=m.end())
	// 	m.erase(it);
	// // m.erase(it);
	// // cout<<(*it).first<<" "<<(*it).second;
	// m.clear();
	// print(m);
	// map<int,string> :: iterator it;
	// for(auto &value:m){
	// 	// cout<<(*it).first<<" "<<(*it).second<<endl;
	// 	cout<<value.first<<" "<<value.second<<endl;
	// }

	// vector<int> v={1,2,3,4,5};
	// vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
	// // string v[3]={"abc","cde","xyz"};
	// for(pair<int,int> &value:v_p) {
	// 	cout<<" "<<value.first<<value.second<<" ";
	// }
	// cout<<endl;
	// for(auto &value:v_p) {
	// 	cout<<" "<<value.first<<value.second<<" ";
	// }
	// cout<<endl;
	// for(int value:v) {
	// 	cout<<value<<" ";
	// }
	// cout<<endl;
	// auto a=1.0;
	// cout<<a;

	// vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
	// // vector<pair<int,int>> :: iterator it;
	// for (auto it = v_p.begin(); it != v_p.end() ; ++it)
	// {
	// 	cout<<(*it).first<<" "<<(*it).second<<endl;
	// }
	// for (it = v_p.begin(); it != v_p.end() ; ++it)
	// {
	// 	cout<<it->first<<" "<<it->second<<endl;
	// }
	// vector<int> v={2,3,5,6,7};
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	cout<<v[i]<<" ";
	// }
	// cout<<endl;
	// vector<int> ::iterator it=v.begin();
	// // cout<<(*(it+1))<<endl;
	// for(it=v.begin();it!=v.end();++it){
	// 	cout<<(*it)<<endl;
	// }
	// int N;
	// cin>>N;
	// vector<vector<int> > v;
	// for (int i = 0; i < N; ++i){
	// 	int n;
	// 	cin>>n;
	// 	vector<int> temp;
	// 	// v.push_back(vector<int> ());
	// 	for (int j = 0; j < n; ++j){
	// 		int x;
	// 		cin>>x;
	// 		temp.push_back(x);
	// 		// v[i].push_back(x);
	// 	}
	// 	v.push_back(temp);
	// }
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	printv(v[i]);
	// }
	// cout<<v[0][0];
	// printv(v);
	// vector<pair<int,int>> v;
	// int n;
	// cin>>n;
	// for(int i=0;i<n;i++){
	// 	int x,y;
	// 	cin>>x>>y;
	// 	// v.push_back({x,y});
	// 	v.push_back(make_pair(x,y));
	// }
	
	// vector<string> v;
	// v.push_back(5);
	// printv(v);
	// vector<int> v2=v; //O(n)
	// v.pop_back();
	// printv(v);
	// printv(v2);
	// int n;
	// cin>>n;
	// for (int i = 0; i < n; ++i)
	// {
	// 	string x;
	// 	cin>>x;
	// 	v.push_back(x);
	// }
	// printv(v);
	// pair<int,string> p;
	// // p=make_pair(2,"hello");
	// p={2,"abc"};
	// pair<int,string> &p1=p;
	// p1.first=6;
	// cout<<p.first<<" "<<p.second<<endl;
	// int a[]={1,2,3};
	// int b[]={2,3,4};
	// pair<int,int>p_array[3];
	// p_array[0]={1,2};
	// p_array[1]={2,3};
	// p_array[2]={3,4};
	// swap(p_array[2],p_array[0]);
	// for (int i = 0; i < 3; ++i)
	// {
	// 	cout<<p_array[i].first<<" "<<p_array[i].second<<" "<<endl;
	// }
	// int t;
	// cin>>t;
	// int a[t];
	// for (int i = 0; i < t; ++i)
	// {
	// 	cin>>a[i];
	// }
	// for (int i = 0; i < t; ++i)
	// {
	// 	cout<<a[i]<<" ";
	// }

}
