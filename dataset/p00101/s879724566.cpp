#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){

  char s[1001];
  char word[8]; word[7]='\0';
  int n;
  int j;

  cin >> n;
  getchar();

  for(int i=0; i<n; i++){

    gets(s);
    j=0;

    while(s[j+7]!='\n'){


        for(int k=0; k<7; k++){
          if(s[j+k]==' '){ break; }
          word[k]=s[j+k];
        }

        //cout << "test:" <<word << endl;


        if(strcmp(word,"Hoshino")==0){
          s[j+6]='a';
        }
      
      j++;
    }
    cout << s << endl;
  }


  return 0;

}