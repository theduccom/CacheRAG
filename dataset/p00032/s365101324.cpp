#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int a, b; //隣り合う辺の長さ
    int c; //対角線の長さ
    int rectangular = 0, rhombus = 0; //長方形と菱形の個数
    
    while(scanf("%d,%d,%d", &a, &b, &c) != EOF){
        if(a * a + b * b == c * c) rectangular++;
        else if(a == b) rhombus++;
    }
    cout << rectangular << endl;
    cout << rhombus << endl;
}

