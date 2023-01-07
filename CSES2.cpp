#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<n; i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=1; i<n; i++){
        ans=ans^arr[i];
    }
    for(int i=1; i<=n; i++){
        ans=ans^i;
    }
    cout<<ans<<endl;
    return 0;
}