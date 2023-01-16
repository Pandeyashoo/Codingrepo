#include<bits/stdc++.h>
using namespace std;
vector<string> solution(int n){
    vector<string>res;
    if(n==1){
        vector<string>bres;
        bres.push_back("0");
        bres.push_back("1");
        return bres;
    }
    vector<string>pres=solution(n-1);
    int k=pres.size();
    for(int i=0; i<k; i++){
        res.push_back("0"+pres[i]);
    }
    for(int i=k-1; i>=0; i--){
        res.push_back("1"+pres[i]);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<string>ans=solution(n);
   for (auto& it : ans) {
        cout <<it<<endl;
    }
}