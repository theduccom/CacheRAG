#include <iostream>
#include <array>

class Baseball{
private:
    int m_runner = 0;
    int m_out = 0;
    int m_point = 0;

public:
    void isHit(){
        if(m_runner < 3){
            ++m_runner;
            //if fill all base    
        } else {
            ++m_point;
        }
    }
    void isHomerun(){
        //add point and reset runner
        m_point += m_runner + 1;
        m_runner = 0;
    }
    void setOut(){
        ++m_out;
    }
    int getOut(){
        return m_out;
    }
    int getPoint(){
        return m_point;
    }

    void resetInning(){
        m_runner = 0;
        m_out = 0;
        m_point = 0;
    }
};

int main(){
    int n;
    std::string event;

    std::cin >> n;
    Baseball baseball;
    for(int i = 0; i < n; ++i){
        //until out count = 3
        while(baseball.getOut() < 3) {
            //input event
            std::cin >> event;
            if (event == "HIT") {
                baseball.isHit();
            } else if (event == "OUT") {
                baseball.setOut();
            } else if (event == "HOMERUN"){
                baseball.isHomerun();
            }
        }
        std::cout << baseball.getPoint() << std::endl;
        baseball.resetInning();
    }
}