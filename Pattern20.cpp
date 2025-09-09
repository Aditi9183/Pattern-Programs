/*
1 0 1 0 1 
0 0 0 0 0  
1 0 1 0 1 
0 0 0 0 0
1 0 1 0 1
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool b=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<0<<" ";
            }
        }
        else
        {
            bool b=1;
            for(int j=1;j<=n;j++)
            {
                cout<<b<<" ";
                b=!b;
            }
        }
        cout<<endl;
    }
    return 0;
}