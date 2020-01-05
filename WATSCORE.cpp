#include<iostream>
using namespace std;
int main()
{
  short int t,n,i;
  short int num,score;
  cin>>t;
  while(t--)
  { 
    short int result;
    short int p[8]={0,0,0,0,0,0,0,0};
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>num>>score;
        switch(num)
        {
          case 1: if(p[0]<score)
                  {
                    p[0]=score;
                  }
                  break;
          case 2: if(p[1]<score)
                  {
                    p[1]=score;
                  }
                  break;
          case 3: if(p[2]<score)
                  {
                    p[2]=score;
                  }
                  break;
          case 4: if(p[3]<score)
                  {
                    p[3]=score;
                  }
                  break;
          case 5: if(p[4]<score)
                  {
                    p[4]=score;
                  }
                  break;
          case 6: if(p[5]<score)
                  {
                    p[5]=score;
                  }
                  break;
          case 7: if(p[6]<score)
                  {
                    p[6]=score;
                  }
                  break;
          case 8: if(p[7]<score)
                  {
                    p[7]=score;
                  }
                  break;
        }
    }
    result=p[0]+p[1]+p[2]+p[3]+p[4]+p[5]+p[6]+p[7];
    cout<<result<<endl;
  }
  return 0;
}
