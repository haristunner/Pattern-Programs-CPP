#include <iostream>
using namespace std;
int main()
{
    int n=5,i,j,k;
    for(i=1; i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j==n+1 || i==n)
            cout<<"* ";
            else
            cout<<"  ";
        }
        for(k=2; k<=n; k++)
        {
            if(i==k || i==n)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
