#include<iostream>
#include<string>
#include<queue>
#include<cstdlib>
using namespace std;

queue<char> qu;
void loop (char n, char c);
void reset();

int main(){
    string input;
    while(cin >>input){
        reset();
        for(int i = 0; i < input.size(); i++){
            if(input[i] == '@'){
                loop(input[i + 1], input[i + 2]);
                i += 2;
            } else{
                qu.push(input[i]);
            }
        }
        for(int i = 0; qu.empty() != 1 ; i++){
            cout <<qu.front();
            qu.pop();
        }
        cout <<endl;
    }
    return 0;
}

void loop(char n, char c){
    int num = n - '0';
    for(int i = 0; i < num; i++){
        qu.push(c);
    }
}

void reset(){
    while(!qu.empty()){
        qu.pop();
    }
}