#include<iostream>
#include<cstdio>
using namespace std;

bool chara(char a){
  return ( a>='a' && a<='z')||(a>='A' && a<='Z');
}

int main(){
  char str[1025];
  int pos,len;

  while(fgets(str,1025,stdin)!=NULL){
    len = 0;
    pos = 0;
    while(str[pos] != '\n'){
      pos++;
      len++;
    }
 
    for(pos=0;pos<len-4;pos++){
      if(str[pos] == 'a'){
	if(str[pos+1] == 'p'){
	  if(str[pos+2] == 'p'){
	    if(str[pos+3] == 'l'){
	      if(str[pos+4] == 'e'){
		//	if( (pos==0 || !chara(str[pos-1])) && (pos+5 == len || !chara(str[pos+5])) ){
		  str[pos] = 'p';
		  str[pos+1] = 'e';
		  str[pos+2] = 'a';
		  str[pos+3] = 'c';
		  str[pos+4] = 'h';
		  //}
	      }
	    }
	  }
	}
      }
      else if(str[pos] == 'p'){
	if(str[pos+1] == 'e'){
	  if(str[pos+2] == 'a'){
	    if(str[pos+3] == 'c'){
	      if(str[pos+4] == 'h'){
		//if( (pos==0 || !chara(str[pos-1])) && (pos+5 == len || !chara(str[pos+5])) ){
		  str[pos] = 'a';
		  str[pos+1] = 'p';
		  str[pos+2] = 'p';
		  str[pos+3] = 'l';
		  str[pos+4] = 'e';
		  //	}
	      }
	    }
	  }
	}
      }
    }
    cout << str;
  }
}