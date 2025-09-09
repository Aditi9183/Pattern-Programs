/*
1 
3 5 
7 9 11 
13 15 17 19
21 23 25 27 29
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k+=2;
        }
        cout<<endl;
    }
    return 0;
}