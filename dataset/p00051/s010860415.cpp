#include<string>
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){

  long long n,ans;
  string str,str2;
  
  cin >> n;

  while(n--){

    cin >> str;
    str2 = str;

    for(int i=0;i<7;i++){
      for(int j=i+1;j<8;j++){
	if(str[i]<str[j]) swap(str[i],str[j]);
	if(str2[i]>str2[j]) swap(str2[i],str2[j]);
      }
    }

    cout << atoi(str.c_str())-atoi(str2.c_str()) << endl;
  }

  return (0);
}