#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;

int main(){

  int n;
  string str,k;

  cin >> n;
  getline(cin,str);

  for(int i=0;i<n;i++){
    getline(cin,str);
    int s = 0;

    for(int j=0;j<str.size();j++){

      if("Hoshino" == str.substr(j,7)){
	j += 6;
		cout << "Hoshina";
      }

       else cout << str[j];

    }
    cout << endl;

  }
}