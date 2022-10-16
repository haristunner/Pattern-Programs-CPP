#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		    if(i>j)
		    cout<<" ";
		    else
		    cout<<"*";
		}
		for(int k=n; k>=1; k--)
		{
		    if(k<=i)
		    cout<<" ";
		    else
		    cout<<"*";
		}
		cout<<endl;
	}
    return 0;
}
