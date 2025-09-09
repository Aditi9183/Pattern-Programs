/*
E J O T Y 
D I N S X 
C H M R W 
B G L Q V 
A F K P U 
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        char ch='A'+i-1;
        for(int j=1;j<=n;j++)
        {
            cout<<ch<<" ";
            ch+=n;
        }
        cout<<endl;
    }
    return 0;
}