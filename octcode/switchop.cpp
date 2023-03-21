#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    float n1,n2;
    cout<<"Enter two numbers";
    cin>>n1>>n2;
    char op;
    cout<<"Enter operator";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    
    default:
    cout<<"enter another operator";
        break;
    }
    


    return 0;
}
