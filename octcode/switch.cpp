#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Enter the character :";
    cin>>button;
    // if (button=='a'){
    //     cout<<"Hello"<<endl;
    // }
    // else if (button=='b'){
    //     cout<<"Hii"<<endl;
    // }
    // else if (button=='c'){
    //     cout<<"bonjor"<<endl;
    // }
    switch (button)
    {
    case 'a':
        cout<<"hello"<<endl;
        break;
    case 'b':
        cout<<"hii"<<endl;
        break;
    case 'c':
        cout<<"namastey"<<endl;
        break;
    case 'd':
        cout<<"bonjor"<<endl;
        break;
    
    default:
    cout<<"i am still learning more";
        break;
    }



    return 0;
}
