#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int ans=0;

    for(int i=0;i*i<=n && i<=m;i++){
       int b=n-i*i;
       if(i+b*b==m){
        ans=ans+1;
       }
    }
    cout<<ans<<endl;
    return 0;
}
