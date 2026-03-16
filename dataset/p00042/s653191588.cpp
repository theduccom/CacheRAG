#include <iostream>
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int knap[1001];
int main(){
    int size, n, w, v, test = 0;
    while(1){
        cin >> size;
        if(size==0) break;
        test++;
        cin >> n;
        fill(knap, knap+size+1, 0);
        for(int i=0; i<n; i++){
            scanf("%d,%d", &v, &w);
            for(int j=size-w; j>=0; j--){
                knap[j+w] = max(knap[j+w], knap[j]+v);
            }
        }
        int ansW = 0;
        int ansV = 0;
        for(int i=0; i<=size; i++){
            if(knap[i] > ansV){
                ansV = knap[i];
                ansW = i;
            }
        }
        cout << "Case " << test << ":" << endl;
        cout << ansV << endl;
        cout << ansW << endl;
    }

}