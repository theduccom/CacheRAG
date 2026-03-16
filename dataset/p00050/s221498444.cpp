#include<string>
#include<iostream>

using namespace std;



main(){
  
  string in;
  getline(cin,in);
  
  for(int i=0;i+4<=in.length();i++){
    
    if((in[i]=='a') && (in[i+1]=='p') &&( in[i+2]=='p')&&(in[i+3]=='l')&&(in[i+4]=='e')){
      in[i]='p';in[i+1]='e';in[i+2]='a';in[i+3]='c';in[i+4]='h';
    }
    else if((in[i]=='p') && (in[i+1]=='e') &&( in[i+2]=='a')&&(in[i+3]=='c')&&(in[i+4]=='h')){
      in[i]='a';in[i+1]='p';in[i+2]='p';in[i+3]='l';in[i+4]='e';
    }//{}ツづーツ湘按猟ェツつキツづゥツづづ慊づつスツつュツつスツつセツつオツつュツつ、ツつイツつゥツづ按つ「ツ！ツ！ツ！ツ！ツ！ツ！ツ！
  }
  
  cout << in << endl;
  return 0;
}