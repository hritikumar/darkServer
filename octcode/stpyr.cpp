#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}
//4240257   Aug 7, 2013 4:45:32 PM	fuwutu	 6A - Triangle	 GNU C++0x	Accepted	 62 ms	 0 KB
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int length[4];
    scanf("%d%d%d%d", &length[0], &length[1], &length[2], &length[3]);
    sort(length, length + 4);
    if (length[0] + length[1] > length[2] || length[1] + length[2] > length[3])
    {
        printf("TRIANGLE\n");
    }
    else if (length[0] + length[1] == length[2] || length[1] + length[2] == length[3])
    {
        printf("SEGMENT\n");
    }
    else
    {
        printf("IMPOSSIBLE\n");
    }
    return 0;
}
