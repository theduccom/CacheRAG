#include <iostream>
using namespace std;
int main()
{
  int a,hoge=0,ans=0;
  while(1){
    cin>>a;
    if(a==-1){
      break;
    }
    if(a<=10){
      hoge=1150;
      ans=4280-hoge;
    }else if(a>10&&a<=20){
      a=a-10;
      hoge=1150+a*125;
      ans=4280-hoge;
    }else if(a>20&&a<=30){
      a=a-20;
      hoge=1150+1250+a*140;
      ans=4280-hoge;
    }else if(a>30){
      a=a-30;
      hoge=1150+1250+1400+a*160;
      ans=4280-hoge;
    }
    cout<<ans<<'\n';
  }
  return 0;
}

