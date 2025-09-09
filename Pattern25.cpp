/*
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        bool b =1;
        for(int j=1;j<=n;j++)
        {
            cout<<b<<" ";
            b=!b;
        }
        cout<<endl;
    }
    return 0;
}