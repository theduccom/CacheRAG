#include <iostream>
using namespace std;

int main () {
    // for (初期設定文　条件式；再設定式）{ 実行文 }
    for (int i = 1; i <= 9; i++ ) {
        
        for (int j = 1; j <= 9; j++ )
            cout << i << "x" << j << "=" << i * j << endl;
   
    }
    return 0;
}

