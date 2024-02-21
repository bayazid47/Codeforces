#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[10];
        int sum=0;
        int r=1;
        for(int i=0;i<10;i++){
            arr[i]=n%10;
            n=n/10;
            if(arr[i] !=0){
                sum++;
            }
        }
        cout<<sum<<endl;
        for(int i=0;i<10;i++){
            if(arr[i] !=0){
                cout<<arr[i]*r<<" ";
            }
            r=r*10;
        }
        cout<<endl;

    }
    return 0;
}
