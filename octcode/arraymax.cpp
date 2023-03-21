#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int maxN=INT_MIN;
    int minN=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (array[i]>max)
        // {
        //     max=array[i];
        // }
        // if (array[i]<min)
        // {
        //     min=array[i];
        // }
        maxN=max(maxN,array[i]);
        minN=min(minN,array[i]);
        
    }
    cout<<minN<<" "<<maxN;
    
    


    return 0;
}
