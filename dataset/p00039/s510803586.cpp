#include <iostream>
#include <string>
using namespace std;


int itorab(char x){
    switch(x){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            break;
    }
}

int main(){
    string str;
    while(cin>>str){
        int n=str.length();
        int ans=0;
        ans += itorab(str[n-1]);
        for(int i=n-1;i>0;i--){
            if(itorab(str[i-1])>=itorab(str[i])){
                ans+=itorab(str[i-1]);
            }else{
                ans-=itorab(str[i-1]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}