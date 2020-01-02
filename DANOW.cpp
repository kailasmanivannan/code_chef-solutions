#include<iostream>
using namespace std;
int main() {
    short int N,Q;
    short int i;
    cin>>N>>Q;
    long int n_s[N],s_s[N];
    long long int temp=0;
    short int inde1,inde2;
    for(i=0;i<N;i++)
    {
        cin>>n_s[i];
    }
    for(i=0;i<N;i++)
    {
        cin>>s_s[i];
    }
    for(i=0;i<Q;i++)
    {
        cin>>inde1>>inde2;
        for(short int start=inde1-1;start<inde2;start++)
        {
            temp=temp+n_s[start]*s_s[start];
        }
        cout<<temp<<endl;
        temp=0;
    
}
	return 0;
    
}
