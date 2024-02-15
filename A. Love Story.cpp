#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    string str="codeforces";
    
    while(t--){
        string s;
        cin>>s;
        int count=0;

        for(int i=0;i<10;i++){
            if(s[i] !=str[i]){
                count++;
                
            } 
        }
     cout<<count<<endl;
    }
    
    return 0;
}
