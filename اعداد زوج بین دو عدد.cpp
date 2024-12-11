#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j;
    cout<<"Enter number 1 :";
    cin>>n;
    cout<<"Enter number 2 :";
    cin>>m;
    if(n>m)
    for(i=m+1;i<n;i++)
    if(i%2==0)
    cout<<i<<endl;
    if (n<m)
    for(j=n+1;j<m;j++)
    if(j%2==0)
    cout<<j<<endl;
    return 0;
}
