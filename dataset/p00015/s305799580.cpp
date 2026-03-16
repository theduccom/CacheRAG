#include<iostream>
#include<string>
#include<cstdlib>
#define DIGIT 80
using namespace std;

class largenum{
  int nums[DIGIT];
  bool overflow;
  int most;
public:
  largenum(){
    overflow=false;
    most=DIGIT-1;
    for(int i=0;i<DIGIT;i++)
      nums[i]=0;
  }
  bool isoverflow(){ return overflow;}
  friend ostream& operator<<(ostream &out,largenum &l);
  friend istream& operator>>(istream &is,largenum &l);
  friend largenum operator+(largenum l1,largenum l2);
};

largenum operator+(largenum l1,largenum l2){
  bool carry=false;
  largenum ans;
  for(int i=DIGIT-1;i>=0;i--){
    int tmp=l1.nums[i]+l2.nums[i]+carry;
    carry=bool((tmp)/10);
    ans.nums[i]=(tmp)%10;
  }
  for(int i=0;i<DIGIT;i++){
    if(ans.nums[i]!=0){
      ans.most=i;
      break;
    }
  }  
  ans.overflow=carry;
  return ans;
}

ostream& operator<<(ostream &out,largenum &l){
  for(int i=l.most;i<DIGIT;i++){
    out<<l.nums[i];
  }
  return out;
}

istream& operator>>(istream &is,largenum &l){
  string str;
  is>>str;
  if(str.size()>DIGIT){
    l.overflow=true;
  }else{
    for(int i=0;i<(int)str.size();i++){
      int index = DIGIT-str.size()+i;
      switch(str[i]){
      case '0':
	l.nums[index]=0;
	break;
      case '1':
	l.nums[index]=1;
	break;
      case '2':
	l.nums[index]=2;
	break;
      case '3':
	l.nums[index]=3;
	break;
      case '4':
	l.nums[index]=4;
	break;
      case '5':
	l.nums[index]=5;
	break;
      case '6':
	l.nums[index]=6;
	break;
      case '7':
	l.nums[index]=7;
	break;
      case '8':
	l.nums[index]=8;
	break;
      case '9':
	l.nums[index]=9;
	break;
      }
    }
    
    l.most=DIGIT-str.size();
  }
  return is;
}

int main(){
  int num;
  cin>>num;
  while(num--){
    largenum a,b;
    cin>>a>>b;
    if(a.isoverflow() || b.isoverflow()){
      cout<<"overflow"<<endl;
      continue;
    }
    a = a+b;
    if(a.isoverflow()){
      cout<<"overflow"<<endl;
    }else{
      cout<<a<<endl;
    }
  }
  return 0;
}