#include<bits/stdc++.h>
using namespace std;
void solution(int n){
    if(n==3 ||n==2){
        cout<<"NO SOLUTION";
        return;
    }
    if(n==1){
        cout<<n;
        return;
    }
    else{
    for(int i=2; i<=n; i=i+2){
        cout<<i<<" ";
    }
    for(int i=1; i<=n; i=i+2){
        cout<<i<<" ";
    }
    
    }
}
int main(){
    int n;
    cin>>n;
    solution(n);
    return 0;
}