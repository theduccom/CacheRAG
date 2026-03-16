#include <iostream>
#include <algorithm>
using namespace std;

int dp[1000], w[1000], v[1000];

int main(){
    int W;
    int N;
    int c = 1;

    while(cin >> W, W != 0){
        fill(dp, dp+W+1, 0);
        cin >> N;
        for(int i=0; i<N; i++){
            scanf("%d,%d", &v[i], &w[i]);
        }

        for(int i=0; i<N; i++){
            for(int j=W; j>=0; j--){
                if(j+w[i] <= W){ //ibvUbNÉiÔÚÌi¨ªüêçêé
                    dp[j+w[i]] = max(dp[j+w[i]], dp[j]+v[i]);
                    /* dp[j+w[i]] Íj+w[i]ÜÅÌd³Åìêé¿lÌ(bè)Åål
                     * dp[j]+v[i] ÍjÜÅÌd³Åìêé¿lÌÅålÆiÔÚÌàÌð«µ½Ì
                     * ¿lðvµ½àÌ
                     * å«¢ûªj+w[i]ÜÅÌå«³Åìêé¿lÌbèÅålÉÈé
                     */
                }
            }
        }

        int max_value = 0;
        for(int i=0; i<=W; i++){
            if(dp[i] > dp[max_value]){
                max_value = i;
            }
        }

        cout << "Case " << c << ":" << endl;
        cout << dp[max_value] << endl;
        cout << max_value << endl;

        c++;
    }
    return 0;
}