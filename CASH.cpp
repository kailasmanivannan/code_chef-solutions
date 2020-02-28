#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int t,n,k,i,q,add_sum,sub_sum,j,result;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int ar[n],add[n],sub[n];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]<k)
            {
                add[i]=k-ar[i];
                sub[i]=ar[i];
            }
            else if(ar[i]%k==0)
            {
                add[i]=sub[i]=0;
            }
            else if(ar[i]>k)
            {
                sub[i]=ar[i]%k;
                q = ar[i]/k;
                q++;
                q = q*k;
                add[i]=q-ar[i];
            }
        }
        for(i=0;i<n;i++)
        {
            add_sum=sub_sum=0;
            for(j=0;j<=i;j++)
            {
                sub_sum+=sub[j];
            }
            for(j=i+1;j<n;j++)
            {
                add_sum+=add[j];
            }
            if(sub_sum>=add_sum)
            {
                result=sub_sum-add_sum;
                break;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
