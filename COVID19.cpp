#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define m 1000000007
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    short int t,n,i,count,ele;
    cin>>t;
    while(t--)
    {
        count=1;
        vector <short int> v;
        cin>>n;
        vector <short int> ar(n);
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(i=0;i<n;i++)
        {
            if(i==n-1)
            {
                v.push_back(count);
                count=1;
            }
            else if((ar[i+1]-ar[i])<=2)
                count++;
            else
            {
                v.push_back(count);
                count=1;
            }
        }
        sort(v.begin(),v.end());
        short int s =v.size();
        cout<<v[0]<<" "<<v[s-1]<<endl;
    }
	return 0;
}
