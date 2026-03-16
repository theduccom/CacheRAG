#include <ios>
#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    while(true){
        int sheet[11][11] = {};
        int size; cin >> size;
        if(size == 0) return 0;
        
        // get
        for(int i=0; i<size; i++){
            int col_sum = 0;
            for(int j=0; j<size; j++){
                cin >> sheet[i][j];
                col_sum += sheet[i][j];
            }
            sheet[i][size] = col_sum;
        }
        
        // show
        for(int i=0; i<size; i++){
            for(int j=0; j<size+1; j++){
                cout << right << setw(5) << sheet[i][j];
            }
            cout << endl;
        }
        // row sum
        for(int i=0; i<size+1; i++){
            int row_sum = 0;
            for(int j=0; j<size; j++){
                row_sum += sheet[j][i];
            }
            cout << right << setw(5) << row_sum;
        }
        cout << endl;
    }
    return 0;
}
