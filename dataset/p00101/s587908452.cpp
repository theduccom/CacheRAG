#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
    string str;
    int n;
    
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++){
        getline(cin,str);
        for (int j = 0; j < str.size(); j++){
            if (str[j] == 'H'){
                if ((str[j + 1] == 'o') && (str[j + 2] == 's') && (str[j + 3] == 'h') && (str[j + 4] == 'i') && (str[j + 5] == 'n') && (str[j + 6] == 'o')){
                    str[j + 6] = 'a';
                    j += 6;
                }
            }
        }
        printf("%s\n", str.c_str());
    }
    
    return (0);
}