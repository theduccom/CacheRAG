#include<iostream>
#include<string>
using namespace std;

int main(){
  string word;
  string com[3]={"the","this","that"};
  int cou=0;

  while(1){
    //bool flag = false;
    getline(cin,word);
    if(cin.eof()){
      break;
    }
    while(1){
      bool flag = false;
      for(int i=0;i<word.size();i++){
	if(word[i] == 'z'){
	  word[i] = 'a';
	}
	else if(word[i] >= 'a' && word[i] <= 'z'){
	  word[i]++;
	}
      }
      for(int i=0;i<3;i++){
	int index = word.find(com[i],0);
	if(index != string::npos){
	  cout << word << endl;
	  flag = true;
	  break;
	}
      }
      if(flag == true) break;
    }
  }
}