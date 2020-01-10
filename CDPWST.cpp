#include<iostream>
using namespace std;
int main()
{
  int tc,n;
  long long ans;
  cin >> tc;
  while(tc--)
  {
    ans = 1;
    cin>>n;
    for(int i=1;i<n;i++)
    {
      ans*= 2;
      ans = ans%1000000007;
    }
    ans = ans/2;
    ans = ans%1000000007;
    ans = ans*n;
    ans = ans%1000000007;
    n = n+1;
    ans = ans * n;
    ans = ans % 1000000007;
    cout<<ans<<endl;
  }
  return 0;
}

