#include <iostream>
#include <math.h>

using namespace std;

int main(){
        int c;
        int sumPrice = 0;
        int sum = 0;
        int price;
        int num;
        while(cin >> price){
                char ch; 
                cin >> ch; 
                cin >> num;
                c++;
                sumPrice += price*num;
                sum += num;
        }   
        cout << sumPrice << "\n" << (int)round((double)sum/c) << endl;
}