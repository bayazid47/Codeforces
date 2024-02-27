#include<bits/stdc++.h>
using namespace std;
#define int long long

void sol(){
  int n;
  cin>>n;
  int s=0;
  int answer;
  map<int,int>bn;

  int rem_i=-1,rem_ii=-1;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    bn[a]++;
    if(a%3==1){
      rem_i=a;
    }
    else if(a%3==2){
      rem_ii=a;
    }
    s +=abs(a);
  }
  int m=s%3;
  if(m==0){
   answer=0;
  }
  else if((s-rem_i)%3==0 || (s-rem_ii)%3==0){
    answer=1;
  }
  else if(m==1){
    answer=2;
  }
  cout<<answer<<endl;
}

signed main(){
  int t;
  cin>>t;
  while(t--){
    sol();
  }
  return 0;
}
