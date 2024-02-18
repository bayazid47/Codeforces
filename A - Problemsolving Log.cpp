#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod=1e9+7;

int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        ll n;
        cin>>n;
        ll count=0;
        cin>>s;
        vector<ll>arr(27);
        for(ll i=0;i<n;i++){
            arr[s[i]-'A']++;
            if(arr[s[i]-'A']==(s[i]-'A'+1)){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;

}

