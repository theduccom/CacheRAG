//
//  main.cpp
//  Sample
//
//  Created by h3037183 on 2017/07/31.
//  Copyright ?? 2017??´ ?°????. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int i,l,j;
    for(i=1;i<10;i++){
        for(l=1;l<10;l++){
            j=i*l;
            cout<<i<<"x"<<l<<"="<<j<<endl;
        }
    }
    return 0;
}