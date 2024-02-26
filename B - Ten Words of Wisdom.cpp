#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int win =0;
        int qua=0;
        int n;
        cin>>n;
        int i=1;
        while(n--){
            int a,b;
            cin>>a>>b;
            if(a<=10 && b>qua){
                win =i;
                qua=b;
            }
            i++;
        }
        cout<<win<<endl;
    }
    return 0;
}
