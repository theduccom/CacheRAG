#include<iostream>
#include<string>
using namespace std;
int main() {
  string a,b,c="",res;
  int n,l=0,d=0,carry=0;
  bool flag;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b;

    if(a.length() > 80 || b.length() > 80) {
      cout<<"overflow"<<"\n";
      goto NEXT;
    }

    l = min(a.length(),b.length());
    flag = a.length() > b.length();
    d=0;
    carry=0;

    for(int i=0; i<l; i++){
      d = a.at(a.length()-i-1) + b.at(b.length()-i-1) - 96 + carry;
      carry=0;
      if(d>9) {
	carry = d/10;
	d %= 10;
      }
      c+=string( 1, d+48 );
    }

    if(flag){
      for(int i=l;i<a.length(); i++){
	d = a.at(a.length()-i-1) -48 + carry;
	carry=0;
	if(d>9){
	  carry = d/10;
	  d %= 10;
	}
	c+= string( 1, d+48 );
      }
    } else {
      for(int i=l;i<b.length(); i++){
	d = b.at(b.length()-i-1) -48 + carry;
	carry=0;
	if(d>9){
	  carry = d/10;
	  d %= 10;
	}
	c+= string( 1, d+48 );
      }
    }

    if(carry) c+= string ( 1, '1' );

    res = string(c.rbegin(),c.rend());

    if(res.length() >80) {
      cout<<"overflow"<<endl;
      goto NEXT;
    }

    cout<<res<<endl;

  NEXT:
    res="";
    c="";
  }
}