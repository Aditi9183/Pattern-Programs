/*
E E E E E 
D D D D D 
C C C C C 
B B B B B 
A A A A A 
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch='A'+n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<ch<<" ";
        }
        ch--;
        cout<<endl;
    }
    return 0;
}