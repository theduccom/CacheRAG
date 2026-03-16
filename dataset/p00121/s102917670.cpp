#include <iostream>
#include <queue>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;


int dir[4] = {-1, 1, -4, 4};
int input[8];
map<string, int> table;

int main(){
    string start = "01234567", cur;

    queue<string> myqueue;
    myqueue.push(start);
    table.insert(make_pair(start,0));


    while(!myqueue.empty()){

        cur = myqueue.front();
        myqueue.pop();

        int zero;
        for(int i=0; i<8; ++i){
            if(cur.at(i)=='0'){
                zero = i;
                break;
            }
        }

        for(int i=0; i<4; ++i){
            if(zero + dir[i] < 0 || zero + dir[i] > 7) continue;
            if(zero == 3 && i == 1) continue;
            if(zero == 4 && i == 0) continue;

            string temp = cur;
            swap(temp.at(zero), temp.at(zero+dir[i]));
            if(table.find(temp) == table.end()){
                table.insert(make_pair(temp, table.find(cur)->second+1));
                myqueue.push(temp);
            }
        }
    }

    string in;
    while(scanf("%d %d %d %d %d %d %d %d", &input[0], &input[1], &input[2], &input[3], &input[4], &input[5], &input[6], &input[7]) != EOF){
        in.clear();
        for(int i=0; i<8; ++i) in.push_back(input[i]+'0');
        cout << table.find(in)->second << endl;
    }

    return 0;
}

