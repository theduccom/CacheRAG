#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class BigInt{
public:
  vector<int> value;
  int sign;

  void set(int n){
    value.clear();
    if(n==0){
      sign = 0;
      value.push_back(0);
    }else if(n<0){
      sign = -1;
      n *= -1;
    }else{
      sign = 1;
    }
    while(n){
      value.push_back(n%10);
      n/=10;
    }
  }

  void set(string str){
    value.clear();
    if(str[0]=='-')sign = -1;
    else if(str[0]=='0')sign = 0;
    else sign = 1;
    int a = 0;
    if(sign<0)a = 1; 
    for(int i=str.size()-1;i>=a;i--){
      value.push_back(str[i]-'0');
    }
  }

  void print(void){
    if(sign<0)cout << '-';
    for(int i=value.size()-1;i>=0;i--)cout << value[i];
    cout << endl;
  }

  BigInt add(BigInt x){
    int max,min;
    BigInt ans;

    if(sign == 0)return x;
    if(x.sign == 0)return *this;
       
    ans.sign = 1;
    ans.value.clear();
    if(value.size()>x.value.size()){
      max = value.size();
      min = x.value.size();
      for(int i=0;i<min;i++)ans.value.push_back(value[i]+x.value[i]);
      for(int i=min;i<max;i++)ans.value.push_back(value[i]);
    }else{
      max = x.value.size();
      min = value.size();
      for(int i=0;i<min;i++)ans.value.push_back(value[i]+x.value[i]);
      for(int i=min;i<max;i++)ans.value.push_back(x.value[i]);
    }
    for(int i=0;i<(int)ans.value.size()-1;i++){
      while(ans.value[i]>=10){
	ans.value[i]-=10;
	ans.value[i+1]++;
      }
    }
    if(ans.value[ans.value.size()-1]>=10){
      ans.value[ans.value.size()-1]-=10;
      ans.value.push_back(1);
    }
    return ans;
  }

};

int main(){
  int n;
  string n1,n2;
  BigInt a1,a2,res;

  cin >> n;
  for(int i=0;i<n;i++){
    cin >> n1;
    cin >> n2;

    a1.set(n1);
    a2.set(n2);

    res = a1.add(a2);

    if(res.value.size()>80)cout << "overflow" << endl;
    else res.print();
  }
}