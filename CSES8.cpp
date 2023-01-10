#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long sum=n*(n+1)/2;
    vector<int>s1;
    vector<int>s2;
    if(sum%2==0){
        cout<<"YES"<<endl;
        long long mid=sum/2;
        for(int i=n; i>=1; i--){
            if(i<=mid){
                s1.push_back(i);
                mid=mid-i;
            }
            else{
                s2.push_back(i);
            }
        }
        cout<<s1.size()<<endl;
        vector<int>::iterator it;
        for(it=s1.begin(); it!=s1.end(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
        cout<<s2.size()<<endl;
        //vector<int>::iterator it;
        for(it=s2.begin(); it!=s2.end(); it++){
            cout<<*it<<" ";
        }
        
    }
    else{
        cout<<"NO";
    }
}