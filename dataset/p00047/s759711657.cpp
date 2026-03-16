#include <iostream>

using namespace std;

int main()
{
  int cup[3]={1,0,0}, temp=0, count=0;
  char cup_str[5]="ABC,";
  char cup1, cup2, cup3;

  while(1){
    cin>>cup1>>cup2>>cup3;

    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
        if(cup1==cup_str[j] && cup3==cup_str[i]){
          temp=cup[j];
          cup[j]=cup[i];
          cup[i]=temp;
        }
      }
    }

    count++;
    if(count==50)
      break;
  }

  for(int i=0;i<3;i++){
    if(cup[i]==1)
      cout<<cup_str[i]<<endl;
  }

  return 0;
}

