#include<bits/stdc++.h>
#define endl "\n"
#define all(x) x.begin(),x.end()
#define ll long long
#define int long long

using namespace std;

int32_t main () {
    int t;
    cin>>t;
    
    while(t--){
       
     int a1,b1; cin>>a1>>b1;
     int a2,b2; cin>>a2>>b2;
     int a3,b3; cin>>a3>>b3;
     int a4,b4; cin>>a4>>b4;
     int ans=1;
     if(a1==a3){
          ans *= abs(b1-b3); //if a1==a2 then (a1-a2)=0.It gives no value.
     }
     else {
        ans *=abs(a1-a3);
     }
     if(a2==a4){
        ans *= abs(b2-b4);
     }
     else{
        ans *= abs(a2-a4);
     }

     cout<<ans<<endl;
    }
    
   return 0;
}
        
