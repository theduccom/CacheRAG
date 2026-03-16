#include<iostream>
#define INF (1<<26)
using namespace std;
int n;



int compute(int a,int b,string str){

  int i=a,sum=0,tmp=INF,tmp2=INF,cnt=0;
  while(1){ //cout<<a<<' '<<b<<endl;
    
    sum=0;
    if(str[i]=='('){
      sum=compute(i+1,0,str);
      //cout<<sum<<endl;
      cnt=0;
      for(i=i;i<(int)str.size();i++){
	if(str[i]==')')cnt--;
	if(str[i]=='(')cnt++;
	if(cnt==0)break;
      }
      i++;
      
    }else{
      while(1){
	if('0'<=str[i]&&str[i]<='9'){
	  sum*=10;
	  sum+=(str[i]-'0');
	  i++;
	}else{
	  break;
	}
      }
    }

    if(b==1){
      sum*=-1;
      b=0;
    }
    if(tmp!=INF){
      sum*=tmp;
      tmp=INF;
    }
    if(tmp2!=INF){
      sum=tmp2/sum;
      tmp2=INF;
    }
    //if(a==8)cout<<sum<<endl;    
    if(str[i]=='\0'||str[i]==')'||str[i]=='='||i==(int)str.size())return sum;
    if(str[i]=='+')return sum + compute(i+1,0,str);
    if(str[i]=='-')return sum + compute(i+1,1,str);
    if(str[i]=='*'){
      i++;
      tmp=sum;
    }else if(str[i]=='/'){
      i++;
      tmp2=sum;
    }
  }
      
}


int main(){
  string str;
  cin>>n;
  while(n--){
    cin>>str;

    //cout<<str<<endl;
    cout<<compute(0,0,str)<<endl;
  }
  return 0;
}