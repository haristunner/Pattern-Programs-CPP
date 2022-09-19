#include <iostream>
using namespace std;
int main()
{
    int n=5;
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j<i)
            cout<<" "<<" ";
            else
            cout<<"*"<<" ";
            
        }
        for(int k=1; k<n; k++)
        {
            if(k>=i)
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(i=1; i<=n; i++)
    {
        for(j=n; j>=1; j--)
        {
            if(j>i)
            cout<<" "<<" ";
            else
            cout<<"*"<<" ";
        }
        for(int k=1; k<=n; k++)
        {
            if(k<i)
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
