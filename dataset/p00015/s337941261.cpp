#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<string.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << x << endl;
using namespace std;

const int MAX = 81;

int main(){
    int n;
    cin >> n;
    while(n--){
        vector<int> ans;
        string input1, input2;
        int len1, len2, up = 0;
        
        cin >> input1 >> input2;
        len1 = input1.length() - 1;
        len2 = input2.length() - 1;
        reverse(input1.begin(), input1.end());
        reverse(input2.begin(), input2.end());

        rep(i,MAX){
            int add = up;
            if(i <= len1){
                add+= input1[i] - '0';
            }
            if(i <= len2){
                add+= input2[i] - '0';
            }
            if(!(add == 0 && i > len1 && i > len2))
            ans.push_back(add % 10);
            up = add / 10;
            if(i > len1 && i > len2) break;
        }

        if(ans.size() > 80){
            cout << "overflow" << endl;
        }else{
            vector<int>::iterator it;
            it = ans.end();
            while(ans.size() != 0){
                --it;
                cout << *it;
                ans.pop_back();
            }cout << endl;
        }
    }
}