#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
    long long y,x;
    cin>>y>>x; //y =row,x=column
    long long ans=0;
    if(y>x){    // when row>column
        if(y%2==0){    //row even then value decreasing
            ans+=(y*y)-x+1;
            cout<<ans<<endl;
        } 
        else{
            ans+=(y-1)*(y-1)+x;  // row odd then value increasing
            cout<<ans<<endl;
        }
    }
    else{
        if(x%2==0){
            ans+=(x-1)*(x-1)+y;   //column even then value increasing
            cout<<ans<<endl;
        }
        else{
            ans+=(x*x)-y+1 ;     //column odd then value decreasing
            cout<<ans<<endl;
        }
    }
}
}