#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int card[5] = {0};
    while(~scanf("%d,%d,%d,%d,%d",&card[0],&card[1],&card[2],&card[3],&card[4])){
        string role = "null";
        sort(card,card+5);
        if((card[0] == card[1] && card[1] == card[2] && card[2] == card[3]) || (card[1] == card[2] && card[2] == card[3] && card[3] == card[4]))role = "four card";
        else if(((card[0] == card[1] && card[1] == card[2]) && card[3] == card[4])||((card[0] == card[1]) && card[2] == card[3] && card[3] == card[4]))role = "full house";
        else if(((card[0]+4) == (card[1]+3)) && ((card[1] + 3) == (card[2] + 2)) && ((card[2] + 2) == (card[3] + 1)) && ((card[3] + 1) == (card[4]))) role = "straight";
        else if(((card[0]+12) == (card[1]+3)) && ((card[1] + 3) == (card[2] + 2)) && ((card[2] + 2) == (card[3] + 1)) && ((card[3] + 1) == (card[4]))) role = "straight";
        else if((card[0] == card[1] && card[1] == card[2]) || (card[1] == card[2] && card[2] == card[3]) || (card[2] == card[3] && card[3] == card[4]))role = "three card";
        else if((card[0] == card[1] && card[2] == card[3]) || (card[1] == card[2] && card[3] == card[4]) || (card[0] == card[1] && card[3] == card[4])) role = "two pair";
        else if(card[0] == card[1] || card[1] == card[2] || card[2] == card[3] || card[3] == card[4]) role = "one pair";
        cout << role << endl;
    }
    return 0;
}