#include <iostream>

std::string add(std::string a, std::string b)
{
    while(a.size() < b.size()) a.insert(0, "0");
    while(b.size() < a.size()) b.insert(0, "0");
    int n = a.size();
    std::string res(n, ' ');
    for(int i=n-1, d=0; i>=0; --i)
    {
        int p   = a[i] - '0';
        int q   = b[i] - '0';
        int r   = p+q+d;
        d       = r/10;
        res[i]  = r%10 + '0';
        if(i == 0 && d != 0) res.insert(0, std::string(1, d+'0'));
    }
    return res;
}

int main()
{
    int wordsNum;
    std::cin >> wordsNum;
    for(int i=0; i<wordsNum; i++)
    {
        std::string a, b;
        std::cin >> a >> b;
        std::string tmp = add(a, b);
        if(tmp.size() > 80) std::cout << "overflow" << std::endl;
        else std::cout << tmp << std::endl;
        
    }
    return 0;
}