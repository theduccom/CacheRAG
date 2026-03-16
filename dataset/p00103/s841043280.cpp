#include <iostream>
#include <queue>
#include <string>


class Baseball {
public:
    int score;                //得点
    int count;                //アウトカウント
    std::queue<int> runner;   //ランナー

    //コンストラクタ
    Baseball(int sc,int co){
        score = sc;
        count = co;
        while(!runner.empty()){
            runner.pop();
        }
    }
    
    //ヒット
    void hit(){
        if(runner.size() == 3){
            ++score;
        }
        else
            runner.push(1);
    }
    
    //ホームラン
    void homerun(){
        while(!runner.empty()){
            ++score;
            runner.pop();
        }
        ++score;
    }
    
    //アウト
    void out(){
        ++count;
    }
};


int main(){
    int n;
    std::string event;
    
    std::cin >> n;
    
    Baseball game(0,0);
    
    while(n > 0 && std::cin >> event){
        if(event == "HIT")
            game.hit();
        else if(event == "HOMERUN")
            game.homerun();
        else
            game.out();
        
        if(game.count == 3){
            --n;
            std::cout << game.score << std::endl;
            game = Baseball(0,0);
        }
    }
}
