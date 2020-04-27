#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define m 1000000007
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,s,i,j,temp;
    bool flag,id;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n>>s;
        int *pl = new int[n];
        vector <int> def;
        vector <int> fow;
        for(i=0;i<n;i++)
        {
            cin>>pl[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>id;
            if(id==0)
            {
                def.push_back(pl[i]);
            }
            else
            {
                fow.push_back(pl[i]);
            }
        }
        s=100-s;
        int s1,s2;
        s1=def.size();
        s2=fow.size();
        for(i=0;i<s1;i++)
        {
            if(flag==1)
                break;
            for(j=0;j<s2;j++)
            {
                temp=def[i]+fow[j];
                if(temp<=s){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"yes"<<endl;
        else
           cout<<"no"<<endl;
    delete pl;
    }
	return 0;
}
