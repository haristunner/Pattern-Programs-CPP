#include<bits/stdc++.h>
using namespace std;

// 1
// 2 6 
// 3 7 10
// 4 8 11 13
// 5 9 12 14 15

int main(){
    int n;
    cin>>n;
    int k=1;
    for(int i=1; i<=n; i++){
        k=i;
        for(int j=1; j<=n; j++){
            if(i>=j)
                cout<<k<<" ";

            k=k+n-j;
        }
        cout<<endl;
    }
    return 0;
}
