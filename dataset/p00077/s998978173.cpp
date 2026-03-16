/* 
 * File:   main.cpp
 * Author: masa
 *
 * Created on 2016/03/05, 9:02
 */

#include <cstdlib>
#include <string>
#include <iostream>


#define MAX 101

using namespace std;

/*
 * 
 */
int main(void) {
    string line;
    

    
    const char* decomposed;
    while(cin >> line) {
        decomposed = line.c_str();
        
        int i = 0;
        while(i < line.length()) {
            if(decomposed[i] == '@') {
                int size = (int)decomposed[i + 1] - 48;
                for(int j = 0; j < size; j++) {
                    cout << decomposed[i + 2];
                }
                i += 3;
            }
            else {
                cout << decomposed[i];
                i++;
            }
        }
        cout << endl;
    }
    return 0;
}