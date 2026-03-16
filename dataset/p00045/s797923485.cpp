#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long num = 0;
    long i = 0;
    long total = 0;
    int t, n;
    char a;
    while (cin >> t >> a >> n){
	num += n;
	total += n*t;
	i++;
    }
    cout << total << endl;
    cout << int(num / double(i) + 0.5) << endl;
}