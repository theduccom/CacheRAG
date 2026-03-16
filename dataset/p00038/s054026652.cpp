#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    string s;
    while(cin >> s){
        vector<int> in;
        int t = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ','){
                in.push_back(t);
                t = 0;
                continue;
            }
            t *= 10;
            t += s[i] - '0';
        }
        in.push_back(t);
        sort(in.begin(),in.end());

        if(in[0] == in[3] || in[1] == in[4]){
            cout << "four card" << endl;
            continue;
        }
        int card[15] = {};
        for(int i = 0; i < 5; i++)card[in[i]]++;
        sort(card, card+15);
        if(card[12] == 0){
            cout << "full house" << endl;
            continue;
        }
        if(card[14] == 1 &&(in[4] - in[0] == 4 || (in[0] == 1 && in[1] == 10 && in[4] == 13))){
            cout << "straight" << endl;
            continue;
        }
        if(card[14] == 3){
            cout << "three card" << endl;
            continue;
        }
        if(card[14] == 2 && card[13] == 2){
            cout << "two pair" << endl;
            continue;
        }
        if(card[14] == 2){
            cout << "one pair" << endl;
            continue;
        }
        cout << "null" << endl;
    }
}

