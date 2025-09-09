/*
1 
3 5 
5 7 9
7 9 11 13
9 11 13 15 17
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int k=2*i-1;
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k+=2;
        }
        cout<<endl;
    }
    return 0;
}