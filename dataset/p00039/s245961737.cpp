#include<iostream>
#include<string>
using namespace std;

int read(string inp);
int ex(char c);

int main(){
    string inp;
    while(cin >>inp){
        inp += "I";
        cout <<read(inp) <<endl;
    }
    return 0;
}

int read(string inp){
    int sum = 0;
    for(int i = 0; i < (inp.size() - 1); i++){
        int now = ex(inp[i]), next = ex(inp[i + 1]);
        if(now >= next){
            sum += now;
        } else{
            sum += (next - now);
            i++;
        }
    }
    return sum;
}

int ex(char c){
    int ret;
    if(c == 'I'){
        ret = 1;
    } else if(c == 'V'){
        ret = 5;
    } else if(c == 'X'){
        ret = 10;
    } else if(c == 'L'){
        ret = 50; 
    } else if(c == 'C'){
        ret = 100;
    } else if(c == 'D'){
        ret = 500;
    } else if(c == 'M'){
        ret = 1000;
    }
    return ret;
}