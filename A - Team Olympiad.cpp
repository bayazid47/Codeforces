    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
     int n,i,j=0,x,k=0,l=0;
     cin>>n;
     int ar[n],a[n],b[n],c[n];
     for(i=0;i<n;i++)
     {
         cin>>ar[i];
         if(ar[i]==1)
         {
             a[j]=i+1;
             j++;
         }
         if(ar[i]==2)
         {
             b[k]=i+1;
             k++;
         }
         if(ar[i]==3)
         {
             c[l]=i+1;
             l++;
         }
     
     }
     x=min(j,k);
     x=min(x,l);
    cout<<x<<endl;
     for(i=0;i<x;i++)
     {
         cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
     }
    }
