/*
1 10 11 20 21
2 9 12 19 22
3 8 13 18 23
4 7 14 17 24
5 6 15 16 25
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        int k=n-i+1,val1=2*i-1,val2=2*n-val1;
        bool b=true;
        for(int j=1;j<=n;j++)
        {
            if(b)
            {
                cout<<k<<" ";
                k+=val1;
            }
            else
            {
                cout<<k<<" ";
                k+=val2;
            }
            b=!b;
        }
        cout<<endl;
    }
    return 0;
}