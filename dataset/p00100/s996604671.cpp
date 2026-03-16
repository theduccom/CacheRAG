#include <iostream>
#define FOR(i,a,b) for(int i=(a); i<(b);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;
typedef long long ll;

int main(){
  int n;//入力するデータ
  int check;
  while(cin >> n){
    if(n==0) break;
    check=0;
    ll num[4001]={0};//社員の売り上げ金額
    bool bl[4001]={false};
    ll t[4001]={0};//社員番号
    ll emp,cost,count;
    int k=0;
    REP(i,n){
      cin >> emp >> cost >> count;
      if(bl[emp]==false){
        bl[emp]=true;
        t[k++]=emp;
        num[emp] = cost*count;
      }
      else{
      num[emp] += cost * count;
      }
    }
    REP(i,n){
      if(num[t[i]] >= 1000000){
        cout << t[i] << endl;
        check++;
  }
    }
    if(check==0)
      cout << "NA" << endl;
  }
}