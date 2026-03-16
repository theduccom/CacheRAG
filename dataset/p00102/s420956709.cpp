#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int n;
  int i, j;
  while(1){
    cin >> n;
    if(n == 0){
      break;
    }
    
    
    int array[11][11] = {};
    for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
	cin >> array[i][j];
	array[i][n] = array[i][n] + array[i][j];
	array[n][j] = array[n][j] + array[i][j];
	array[n][n] = array[n][n] + array[i][j];
      }
    }

    for(i = 0; i <= n; i++){
      for(j = 0; j <= n; j++){
	std::cout << std::right << std::setw(5) << array[i][j];
      }
      cout << endl;
    } 

  }

    
    
  return 0;
}