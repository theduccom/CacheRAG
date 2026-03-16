#include <iostream>
using namespace std;

int main(){
    string ss;
    int count = 0;
    while( cin >> ss ){
        int i, j;
        for(i = 0, j = ss.length()-1; i < j; i++,j--){
            if( ss[i] != ss[j] ) break;
        }
        count += (i >= j);
    }
    cout << count << endl;
    return 0;
}