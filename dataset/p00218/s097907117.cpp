#include<iostream>
using namespace std;
int n,a,b,c;
char solve(){
  if(a==100||b==100||c==100)return 'A';
  if(a+b>=180)return 'A';
  if(a+b+c>=240)return 'A';
  if(a+b+c>=210)return 'B';
  if(a+b+c>=150&&(a>=80||b>=80))return 'B';
  return 'C';

}
int main(){
  while(cin>>n&&n){
    for(int i=0;i<n;i++){
      cin>>a>>b>>c;
      cout<<solve()<<endl;
    }
  }
  return 0;
}