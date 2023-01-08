#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
   int curr_frequency=1;
   int max_frequency=1;
    for(int i=0; i<s.length()-1; i++){
        if(s[i]==s[i+1])curr_frequency++;
        else curr_frequency=1;
        if(curr_frequency>max_frequency)max_frequency=curr_frequency;
    }
    cout<<max_frequency<<endl;
     return 0;
}