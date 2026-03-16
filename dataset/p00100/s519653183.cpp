#include <iostream>
#include <map>

int main()
{
  int n;
  while (std::cin >> n) {
    if (n == 0) break;
    
    bool na = true;
    std::map<int, long long> id_sales_map;

    for (int i = 0; i < n; ++i) {
      int ID;
      long long price, number;
      std::cin >> ID >> price >> number;

      if (id_sales_map[ID] < 1000000) {
        id_sales_map[ID] += price * number;
        if (id_sales_map[ID] >= 1000000) {
          std::cout << ID << std::endl;
          na = false;
        }
      }
    }

    if (na) {
      std::cout << "NA" << std::endl;
    }
  }

  return 0;
}