/*
1 3 5 7 9
11 13 15 17 19
21 23 25 27 29
31 33 35 37 39
41 43 45 47 49
*/


#include<iostream>
using namespace std;

int main()
{
    int n,k=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<k<<" ";
            k+=2;
        }
        cout<<endl;
    }
    return 0;
}