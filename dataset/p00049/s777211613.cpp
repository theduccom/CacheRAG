//
//  akjbef.cpp
//  
//
//  Created by Takuto on 15/6/3.
//
//

#include <cstdio>

int main(){
    char in[3];
    int a=0,b=0,ab=0,o=0;
    
    while(EOF!=scanf("%*d,%s",in)){
        
        if(in[1]!='\0')
            ab++;
        else if(in[0]=='A')
            a++;
        else if(in[0]=='B')
            b++;
        else
            o++;
    }
    
    printf("%d\n%d\n%d\n%d\n",a,b,ab,o);
    
    return 0;
}