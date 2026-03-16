#include <iostream>
#include <unordered_map>
#include <queue>

int a[2][4] , stx , sty , nx;
int dirc[4][2] = {{-1 , 0} , {1 , 0} , {0 , -1} , {0 , 1}};
std::unordered_map <int , int> st;
struct node{
    int x;
    int step;
};
void fx(int y){
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 4;j++){
            a[i][j] = y % 8;
            y = (int)(y / 8);
            if(a[i][j] == 0){
                stx = j , sty = i; 
            }
        }
    }
}
bool f(int k){
    if(stx + dirc[k][0] < 0 || stx + dirc[k][0] >= 4 || sty + dirc[k][1] < 0 || sty + dirc[k][1] >= 2){
        return false;
    }
    nx = 0;
    int tmp = 1;
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 4;j++){
            if(i == sty && j == stx){
                nx += tmp * a[sty + dirc[k][1]][stx + dirc[k][0]];
            }else if(i == sty + dirc[k][1] && j == stx + dirc[k][0]){
                nx += 0;
            }else{
                nx += tmp * a[i][j];
            }
            tmp *= 8;
        }
    }
    return true;
}
int main(){
    st[16434824] = 0;
    node nod;
    nod.x = 16434824 , nod.step = 0;
    std::queue <node> que;
    que.push(nod);
    while(!que.empty()){
        nod = que.front();
        que.pop();
        fx(nod.x);
        for(int i = 0;i < 4;i++){
            if(f(i)){
                if(st.find(nx) == st.end()){
                    st[nx] = nod.step + 1;
                    node nod1;
                    nod1.x = nx , nod1.step = nod.step + 1;
                    que.push(nod1);
                }
            }
        }
    }
    while(std::cin >>a[0][0]>>a[0][1]>>a[0][2]>>a[0][3]>>a[1][0]>>a[1][1]>>a[1][2]>>a[1][3]){
        int mark = 0 , tmp = 1;
        for(int i = 0;i < 2;i++){
            for(int j = 0;j < 4;j++){
                mark += tmp * a[i][j];
                tmp *= 8;
            }
        }
        std::cout << st.at(mark) << "\n";
    }
}
