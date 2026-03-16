#include <iostream>
#include <cstring>

using namespace std;

int main(void){
    int i,j,k,l;
    int count=0;
    bool flag;
    char str[101];
    
    while(cin>>str){
        flag=true;
        i=0;
        l=strlen(str)-1;
        while(i<l){
            if(str[i]!=str[l]){
                flag=false;
                break;
            }
            i++;
            l--;
        }
        if(flag)count++;
    }
    cout<<count<<endl;
    return (0);
}