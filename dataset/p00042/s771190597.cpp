//http:judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0042

#include <iostream>
#include <fstream>

#define fin cin

using namespace std;
 
int main(void){

    //ifstream fin("input2.txt");

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
            dp[i] = -10;
            
        //DynamicProgramming! not memoka!!!
        for(int i = 0; i < n; i++) {
            for(int j = maxWeight - w[i]; j >= 0; j--) {

                int sub = j + w[i];
                if(0 <= dp[j] && sub <= maxWeight) {

                    dp[sub] = max( dp[j] + v[i], dp[sub] );

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