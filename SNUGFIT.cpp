#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	long int n,i,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        long int a[n];
        long int b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                sum+=b[i];
            }
            else if(a[i]<b[i])
            {
                sum+=a[i];
            }
        }
        cout<<sum<<endl;
    }
	return 0;
}
