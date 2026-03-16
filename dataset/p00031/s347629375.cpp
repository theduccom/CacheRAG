#include<iostream>
using namespace std;

int weight[10] = {1,2,4,8,16,32,64,128,256,512};

int main(){
    int input,count;
    bool is_use[10];

    while(1){

      cin >> input;

      if(cin.eof()){
        break;
      }

      for(int i=0;i<10;i++){
        is_use[i] = false;
      }

      count = 0;

      for(int i=9;i>=0;i--){
        if(input >= weight[i]){
          input -= weight[i];
          is_use[i] = true;
          count++;
          if(input == 0){
            break;
          }
        }
      }

      for(int i=0; i<10; i++){
        if(is_use[i]){
          count--;
          if(count==0){
            cout << weight[i] << endl;
          }
          else{
            cout << weight[i] << " ";
          }
        }
      }


    }


    return 0;
}