/*
A F K P U 
B G L Q V 
C H M R W 
D I N S X 
E J O T Y 
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
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