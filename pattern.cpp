#include <iostream>
using namespace std;
int main()
{
    int n=5,i,j,k=1,b=0,a=n*(n+1)+1;
    for(i=1; i<=n; i++)
    {   
        
        for(j=1; j<=n;j++)
        {
            if(i>j)
            cout<<" ";
            else
            {cout<<k;
            k++;}
        }
        b=a-k+1;
        for(int h=1; h<=n; h++)
        {
            if(i<=h)
            {
             cout<<b;
             b++;
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
