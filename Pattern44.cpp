/*
1 
3 2 
6 5 4 
10 9 8 7
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=0;
    for(int i=1;i<=n;i++)
    {
        k=k+i;
        int val=k;;
        for(int j=1;j<=i;j++)
        {
            cout<<val<<" ";
            val--;
        }
        cout<<endl;
    }
    return 0;
}