
#include <iostream>
#include <string>
#include <cstddef>

int main(){
    std::string buf;
    int n;

    std::cin >> n;
    // now, there is "\n ...." in the stream.
    // then, skip the initial '\n'.
    std::getline(std::cin,buf);

    for (int i=0;i < n;++i) {
        std::getline(std::cin,buf);
        size_t pos = 0; // index where we will start searching.

        while (true) {
            pos = buf.find("Hoshino",pos);
            if (pos == std::string::npos) {    // couldn't find.
                break;
            }else{
                buf.replace(pos,7,"Hoshina");
                pos += 7;
            }
        }
        std::cout << buf << std::endl;
    }

    return 0;
}