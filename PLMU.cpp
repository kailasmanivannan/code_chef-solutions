#include<iostream>
using namespace std;
int main()
{
    short int t,i;
    int sum,count1,count2;
    cin>>t;
    while(t--){
        count1=count2=sum=0;
        int n;
        cin>>n;
        int *ar =new int[n];
        for(i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]==0){
                count1++;
            }
            else if(ar[i]==2){
                count2++;
            }
        }
        for(i=1;i<count1;i++)
        {
            sum=sum+i;
        }
        for(i=1;i<count2;i++)
        {
            sum=sum+i;
        }
        cout<<sum<<endl;
    }
}
