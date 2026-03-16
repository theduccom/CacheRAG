#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
    string s;
    char output[210];
    getline(cin,s);
    const char *input = s.c_str();
    int i;
    while(input[i] != '\0'){
        if(input[i] >= 'a' && input[i] <= 'z'){
            output[i] = input[i] - 32;
        }
        else{
            output[i] = input[i];
        }
        i++;
    }
    output[i] = '\0';
    cout << output << endl;
}