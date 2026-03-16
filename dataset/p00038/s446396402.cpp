#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

enum Form{null,oneP,twoP,threeC,straight,fullHouse,fourC};

int main()
{
    int card[5];
    bool cardFlag[5];
    while(scanf("%d,%d,%d,%d,%d",&card[0],&card[1],&card[2],&card[3],&card[4]) != EOF){
        int cnt=0;
        Form f=null;
        for(int i=0;i<5;i++){
            cardFlag[i]=false;
        }
        sort(card,card+5);
        for(int i=0;i<5;i++){
            if(i!=0){
                if(card[i-1]==card[i]){
                    cardFlag[i-1]=true;
                    cardFlag[i]=true;
                }
            }
            if(i==4){
                for(int j=0;j<5;j++){
                    if(cardFlag[j]){
                        cnt++;
                    }
                }
            }
        }
        if(cnt>0){
            switch(cnt){
                case  2:
                    f=oneP;
                    break;
                case  3:
                    f=threeC;
                    break;
                case  4:
                    if(card[1]!=card[3]){
                        f=twoP;
                    }
                    else{
                        f=fourC;
                    }
                    break;
                case  5:
                    f=fullHouse;
                    break;
            }
        }
        else{
            if(card[1]+1==card[2] && card[2]+1==card[3] &&card[3]+1==card[4]){
                if(card[0]+1==card[1]) f=straight;
                else if(card[0]==1 && card[4]==13) f=straight;
            }
        }
        switch(f){
            case null :
                cout<<"null"<<endl;
                break;
            case oneP :
                cout<<"one pair"<<endl;
                break;
            case twoP :
                cout<<"two pair"<<endl;
                break;
            case threeC :
                cout<<"three card"<<endl;
                break;
            case straight :
                cout<<"straight"<<endl;
                break;
            case fullHouse :
                cout<<"full house"<<endl;
                break;
            case fourC :
                cout<<"four card"<<endl;
                break;
        }
    }
    return 0;
}