/*
0 1 0 1 0
1 0 1 0 1 
0 1 0 1 0 
1 0 1 0 1 
0 1 0 1 0
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool b=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<b<<" ";
            b=!b;
        }
        cout<<endl;
    }
    return 0;
}