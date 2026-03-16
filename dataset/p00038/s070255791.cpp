#include <string>
#include <iostream>
#include <map>
#include <cstdio>
 
using namespace std;
 
int main(){
    int hand[5];
 
    while(~scanf("%d", &hand[0])){
        for(int i = 1; i < 5; i++){
            scanf(",%d", &hand[i]);
        }
        int num[15] = {0};
 
        for(int i = 0; i < 5; i ++){
			if(hand[i] == 1) num[14]++;
			num[hand[i]]++;
		} 
        int h[7] = {0};
        string s[] = {"null", "one pair", "two pair", "three card", "straight", "full house", "four card"};
        int seq = 0;
        h[0] = 1;
        for(int i = 1; i < 15; i++){
            if(num[i-1] && num[i]) seq++;
            if(num[i] == 2 && i != 14) h[1]++;
            if(num[i] == 3) h[3]++;
            if(num[i] == 4) h[6]++;
        }
        if(h[1] > 1) h[2]++;
        if(h[1] && h[3]) h[5]++;
        if(seq == 4)
			if(!(num[2] && num[13])) h[4]++;
 
        for(int i = 6; i >= 0; i--){
            if(h[i]){
                cout << s[i] << endl;
                break;
            }
        }
    }
 
 
    return 0;
}