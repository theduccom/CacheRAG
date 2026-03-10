#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    for(int i = 1; i < 10; i ++){
      for(int j = 1; j < 10; j++){
        //printf("%dx%d=%d\n",i,j,i*j);
        cout << i << "x" <<  j << "=" << i*j << endl;
      }
    }
  return 0;
}
