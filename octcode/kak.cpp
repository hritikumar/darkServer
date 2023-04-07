#include<bits/stdc++.h>
using namespace std;
// const int N=1e3+10;
// int A[N][N];
// long long PF[N][N];
// const int N=1e7+10;
// int HSH[N];
// void swap(int &a,int &b){
//     int temp=a;
    
//     a=b;
//     b=temp;
// }
int main()
{
    int t;
    while(t--){
       int n,q;
       cin>>n>>q;
       int a[n+10];
       int forward[n+10];
       int backward[n+10];
       forward[0]=backward[n+1]=0;
        for(int i=1;i<=n;++i){
            cin>>a[i];
        }
        for(int i=1;i<=n;++i){
            forward[i]=__gcd(forward[i-1],a[i]);
        }
        for(int i=n;i>=1;--i){
            backward[i]=__gcd(backward[i+1],a[i]);
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<__gcd(forward[l-1],backward[r+1])<<endl;
        }
    }
    
    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; ++i){
    //     for (int j =1 ;j <= n; ++j){
    //         cin>>A[i][j];
    //         PF[i][j]=A[i][j]+PF[i-1][j]+PF[i][j-1]-PF[i-1][j-1];
    //     }
    // }

    // int q;
    // cin>>q;
    // while(q--){
    //     int a,b,c,d;
    //     cin>>a>>b>>c>>d;
    //     // long long sum=0;
    //     // for (int i = a; i <=c ; ++i)
    //     // {
    //     //     for (int j = b; j <=d; ++j)
    //     //     {
    //     //         sum+=A[i][j];
    //     //     }
    //     // }
    //     // cout<<sum<<endl;
    //     cout<<(PF[c][d]-PF[a-1][d]-PF[c][b-1]+PF[a-1][b-1])<<endl;

    // }
    
    // int n;
    // cin>>n;
    // long long sum=0;
    // for (int i = 1; i <= n; ++i){
    //     cin>>A[i];
    //     sum+=A[i];
    //     A[i]=sum;
    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     int a,b,c,d;
    //     cin>>a>>b;
    //     cout<<(A[b]-A[a-1])<<endl;
    // }
    // int n;
    // cin>>n;
    // int a[n];
    // for (int i = 0; i < n; ++i)
    // {
    //     cin>>a[i];
    //     HSH[a[i]]++;
    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     int x;
    //     cin>>x;
    //     cout<<HSH[x]<<endl;
    // }


    
    // long long m=(10**9)+7;
    // long long fact=1;
    // for (int i = 2; i <= n; ++i)
    // {
    //     /* code */
    //     fact=(fact*i)%m;


    // }
    // cout<<fact;
    
    // int a[3]={1,2,4};
    // cout<<*(a+1);
    // int g=7;
    // int *f=&g;
    // int **ff=&f;
    // cout<<&g<<" "<<f<<" "<<*ff<<" "<<**ff;
    // int a=4,b=7;

    // swap(a,b);
    // cout<<a<<" "<<b;

    // int n,m;
    // cin>>n>>m;
    // int a[n][m];
    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < m; ++j)
    //     {
    //         /* code */
    //         cin>>a[i][j];
    //     }

    // }
    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < m; ++j)
    //     {
    //         /* code */
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    
    // }
    // string str;
    // cin>>str;
    // int last_digit=str[str.size()-1]-'0';
    // cout<<last_digit;

        // string str;
    // cin>>str;
    // string rev;
    // for(int i=str.size()-1;i>=0;--i){
    //     // rev=rev+str[i];
    //     rev.push_back(str[i]);
    // }
    // cout<<rev<<endl;
    // if(str==rev){
    //     cout<<"it is palindrom";
    // }
    // else{
    //     cout<<"no";
    // }
    // string str;
    // cin>>str;
    // cout<<str<<endl;
    // getline(cin,str);
    // cout<<str;
    // int t;
    // cin>>t;
    // cin.ignore();
    // while(t--){
    //     string str;
    //     getline(cin,str);
    //     cout<<str<<endl;
    // }



    // cout<<"Hello"<<endl;;
    // char c='a';
    // cout<<(int)c;
    // cout<<7/4.0;
    // -10^9<int<10^9
    // int a=1e9;
    // int b=100000;
    // long long  c=a+ 1LL + b-1;
    // cout<<c;
    // int l,b;
    // cin>>l>>b;
    // cout<<l*1LL*b;
    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;

    // }
//     int t;

//     cin>>t;
//     while(t--){
//     int n;
//     cin>>n;
//     int sum=0;
//     while(n>0){
//         int lastdigit=n%10;
//         sum=sum+lastdigit;
//         n=n/10;
//     }
//     cout<<sum<<endl;
// }
    }
