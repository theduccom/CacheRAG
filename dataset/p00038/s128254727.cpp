#include <iostream>

using namespace std;

void judge(int *cards){
    int i,j;
    int index[4] = {0};
    
    for(i = 1; i < 14; i++){
        if(cards[i] == 0){
            continue;
        }
        
        if(cards[i] == 4){
            cout<<"four card"<<endl;
            return;
        }
        else if(cards[i] == 1){
            for(j = i+1; j < 15; j++){
                if(cards[j] != 1){
                    break;
                }
            }
            if(j-i == 5){
                cout<<"straight"<<endl;
                return;
            }
        }
        else if(cards[i] == 2){
            index[2]++;
        }
        else{
            index[3]++;
        }
    }
    
    if(index[2] == 2){
        cout<<"two pair"<<endl;
        return;
    }
    
    if(index[3] == 1){
        if(index[2] == 1){
            cout<<"full house"<<endl;
        }else{
            cout<<"three card"<<endl;
        }
    }else{
        if(index[2] == 1){
            cout<<"one pair"<<endl;
        }else{
            cout<<"null"<<endl;
        }
    }
    return;
}

int main(void){
    int cards[15] = {0};
    int num,i,j;
    char c;
    
   while(cin>>num){
       if(num == 1){
           cards[14]++;
       }
       cards[num]++;
       
       for(i = 0; i < 4;i++){
            cin>>c>>num;
            if(num == 1){
                cards[14]++;
            }
            cards[num]++; 
       }
       
       judge(cards);
       
       for(i = 0; i < 15;i++){
            cards[i] = 0;
       }

   }
   
   return 0;
}

