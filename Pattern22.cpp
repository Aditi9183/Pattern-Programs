/*
0 0 0 0 0
1 1 1 1 1 
0 0 0 0 0
1 1 1 1 1 
0 0 0 0 0
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<1<<" ";
            }
        }
        else
        {
            for(int j=1;j<=n;j++)
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}