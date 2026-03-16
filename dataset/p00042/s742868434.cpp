#include <iostream>
#include <fstream>

#define fin cin

using namespace std;
 
int main(void){

   // ifstream fin("input2.txt");

    int Case = 1;
    int maxWeight;
 
    //??????????????????
    while(fin >> maxWeight, maxWeight) {

        int n, sumWeight = 0;
        int w[1000], v[1000];
        int dp[1001] = {0};
        fin >> n;
        for(int i = 0; i < n; i++){

            //value
            string str_in;
            getline(fin, str_in, ',');
            v[i] = stoi(str_in);

            //weight
            getline(fin, str_in);
            w[i] = stoi(str_in);
        }

        //?????????
        for(int i = 1; i <= maxWeight; i++)
            dp[i] = -1;
 
        for(int i = 0; i < n; i++) {
            for(int j = maxWeight - w[i]; j >= 0; j--) {
                if(0 <= dp[j] && j + w[i] <= maxWeight) {
                    dp[j + w[i]] = ((dp[j + w[i]] > dp[j] + v[i]) ? dp[j + w[i]] : (dp[j] + v[i]));
                }
            }
        }
 
        for(int i = 0; i <= maxWeight; i++)
            if(dp[i] > dp[sumWeight]) sumWeight = i;
 
        cout << "Case " << Case++ << ":" << endl;
        cout << dp[sumWeight] << endl;
        cout << sumWeight << endl;
    }
 
    return 0;
}