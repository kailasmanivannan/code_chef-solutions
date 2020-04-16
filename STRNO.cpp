#include<iostream>
#include<math.h>
using namespace std;
long long int count_prime(long long int K)
{
    long long int count = 0;
    while(K%2==0)
    {
        K/=2;
        count++;
    }
    long long int i=3;
    for(i=3;i<sqrt(K);i+=2)
    {
        if(K%i==0)
        {
            while(K%i==0)
            {
                K/=i;
                count++;
            }
        }
    }
    if(K>2)
    {
        count++;
    }
    return count++;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    long long int x,k;
    while(t--)
    {
        cin>>x>>k;
        if(k==1)
        {
            cout<<'1'<<endl;
        }
        else
        {
            if(x>=pow(2,k))
            {
                cout<<(count_prime(x)>=k?'1':'0')<<'\n';
            }
            else
            {
                cout<<'0'<<'\n';
            }
        }
    }
    return 0;
} 
