    #include <bits/stdc++.h>
    using namespace std;
    
    int main(){
        int t;
        cin>>t;
        
        while(t--){
            long long a,b,c;
            cin>>a>>b>>c;
            if(a>=c){
              cout<<-1<<" "<<b<<endl;
            }else{
                if(a<c && a*b<=c){
               cout<<1<<" "<<-1<<endl;
                }else{
                    cout<<1<<" "<<b<<endl;
     
                }
            }
        }
        
        return 0;
    }
