#include <iostream>
#include <string>
using namespace std;

int main(){
 string a;
 getline(cin,a);
 for(int i=0;i<a.size();i++){
	 if(a[i]>='a'&&a[i]<='z')cout<<(char)(a[i]-32);
	 else cout<<a[i];
	}
	cout<<endl;
 return 0;
 }
