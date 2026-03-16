#include<bits/stdc++.h>
using namespace std;

int main(){
  map<char,int> mas;
  mas['A']=1;
  mas['B']=0;
  mas['C']=0;
  char a,b;
  while(scanf("%c,%c",&a,&b)!=EOF){
    int temp=mas[a];
    mas[a]=mas[b];
    mas[b]=temp;
  }
  char ans=0;
  for(int i='A';i<='C';i++){
    if(1==mas[i]){
      ans=i;
    }
    
  }
  cout<<ans<<endl;
}