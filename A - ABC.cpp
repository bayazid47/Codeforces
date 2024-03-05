#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t,len;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>len;
        cin>>s;
        if(len==1)
        cout<<"YES"<<endl;
        else if(len==2)
        {
            if(s[0]!=s[1])
            {
            cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
