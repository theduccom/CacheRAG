#include<iostream>
#include<vector>
#define MAX 100000
using namespace std;
int main(){
    vector<bool> v(MAX);
    for(int i = 0;i<MAX;i++)
      v[i]=true;

      v[0]=v[1]=false;
    for(int i = 2;i<1000;i++){
      if(v[i]){
        for(int j=i*i;j<MAX;j+=i){
         v[j]=false;
       }
      }
    }
    while(true){
      int a;
      cin >> a;
      if(cin.eof())return 0;
      for(int i = a-1;true;i--){
        if(v[i]){
          cout << i <<' ';
          break;
      }
    }
    for(int i = a+1;true;i++){
      if(v[i]){
        cout <<i<<endl;
        break;
     }
   }
 }
}

