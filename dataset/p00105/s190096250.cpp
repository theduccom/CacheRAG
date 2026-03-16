#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<sstream>

using namespace std;

string itos(int);


int main(){


  string s[1000];
  int n[1000];

  int sumin = 0;


  for(int i = 0; cin >> s[i] >> n[i]; i++){
    sumin++;
  }

  for(int i = 0; i < sumin-1; i++){
    for(int j = i; j < sumin; j++){
      if(n[i] > n[j]){
        int stock = n[i];
	n[i] = n[j];
	n[j] = stock;
	string stack = s[i];
	s[i] = s[j];
	s[j] = stack;
      }
    }
  }


  string num[1000];


  map<string, string> M;


  for(int i = 0; i < sumin; i++){
    for(int j = 0; j < i; j++){
      if(s[j] == s[i]){
	M[s[i]] += " ";
	break;
      }
    }

    M[s[i]] += itos(n[i]);

  }

  sort(s, s+sumin);


  for(int i = 0; i < sumin-1; i++){
    int check = 0;
    if(i != 0){
      for(int j = 0; j < i; j++){
	if(s[i] == s[j]){
	  check++;
	}else if(check == 0 && j == i-1){	
	  cout << s[i] << endl << M[s[i]] << endl;
	}
      }
    }else{
      cout << s[i] << endl << M[s[i]] << endl;
    }
  }


  
  return 0;
}

string itos(int x){
  ostringstream s;
  s << x;
  return s.str();
}