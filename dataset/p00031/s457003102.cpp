#include<iostream>
using namespace std;

int n;

int a[10] = {1,2,4,8,16,32,64,128,256,512};
int flag[10] = {0};

bool dfs(int i,int sum){
      
    if(sum == n){
        return true;
    }

    if(i == 10){
        return false;
    }
    //not including i
    if(dfs(i+1,sum)){
        return true;
    }
    
    //including i
    if(dfs(i+1,sum + a[i])){
        flag[i] = 1;
        return true;
    }
}

void solve(){

    dfs(0,0);
}

int main(){

    int m;
    while(cin >> n){
        
        solve();
        for(int i = 0;i < 10;i++){
            if(flag[i]){
                m = i;
            }
        }

        for(int i = 0;i < m+1;i++){
            if(flag[i]){
                if(i < m){
                    cout << a[i] << " ";
                }else{
                    cout << a[i] << endl;
                }               
            }
        }
        for(int i = 0;i < 10;i++){
            flag[i] = 0;
        }
    }
    return 0;
}