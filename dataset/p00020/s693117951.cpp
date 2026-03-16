#include <iostream>
#include <string>
#include <algorithm>

class capitalize {
public:
    capitalize();
    bool Run();

private:
    
    bool Input();
    bool Convert();
    void Show() const;

private:
    std::string m_lower;    // Lower case
    std::string m_upper;    // Upper case
};

capitalize::capitalize() : m_lower(""), m_upper("")
{

}

bool capitalize::Run()
{
    bool status = false;

    status = Input();
    if (!status) {
        return false;
    }
    status = Convert();
    if (!status) {
        return false;
    }
    Show();

    return true;
}

bool capitalize::Input()
{
    std::getline(std::cin, m_lower);
    if (0 == m_lower.size()) {
        return false;
    }
    return true;
}

bool capitalize::Convert()
{
    m_upper.resize(m_lower.size());
    std::transform(m_lower.begin(), m_lower.end(), m_upper.begin(), toupper);

    return true;
}

void capitalize::Show() const
{
    std::cout << m_upper << std::endl;
}

int main()
{
    capitalize test;
    test.Run();
}