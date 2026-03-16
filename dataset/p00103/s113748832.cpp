#include <iostream>
#include <array>

class Baseball{
private:
    int m_first = 0;
    int m_second = 0;
    int m_third = 0;
    int m_out = 0;
    int m_point = 0;

public:
    void isHit(){
        if(m_third == 1){
            m_third = 0;
            ++m_point;
        }
        if(m_second == 1){
            m_second = 0;
            m_third = 1;
        }
        if(m_first == 1){
            m_second = 1;
        }
        else {
            m_first = 1;
        }
    }
    void isHomerun(){
        m_point += m_first + m_second + m_third + 1;
        m_first = 0;
        m_second = 0;
        m_third = 0;
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
};

int main(){
    int n;
    std::string event;

    std::cin >> n;
    Baseball baseball[n];
    //std::array<Baseball, n> baseball;
    for(int i = 0; i < n; ++i){
        while(baseball[i].getOut() < 3) {
            std::cin >> event;
            if (event == "HIT") {
                baseball[i].isHit();
            } else if (event == "OUT") {
                baseball[i].setOut();
            } else if (event == "HOMERUN"){
                baseball[i].isHomerun();
            }
        }
        std::cout << baseball[i].getPoint() << std::endl;
    }
}