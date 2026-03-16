#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>

using namespace std;

int main() {
  int N;
  
  cin >> N;

  for (int N_i = 0; N_i < N; N_i++) {
    bool overflow = false;
    string str_data1, str_data2;
    cin >> str_data1;
    cin >> str_data2;

    stack<int> data1, data2; 
    for (int data1_i = 0; data1_i < str_data1.size(); data1_i++) {
      char buff[2];
      buff[0] = str_data1[data1_i];
      buff[1] = '\0';
      data1.push(atoi(buff));
    }
    if (data1.size() > 80) {
      cout << "overflow" << endl;
      continue;
    }
    for (int data2_i = 0; data2_i < str_data2.size(); data2_i++) {
      char buff[2];
      buff[0] = str_data2[data2_i];
      buff[1] = '\0';
      data2.push(atoi(buff));
    }
    if (data2.size() > 80) {
      cout << "overflow" << endl;
      continue;
    }

    stack<int> sum;
    int carry = 0;
    int flag = data1.size() < data2.size() ? 0 : 1;
    while(flag == 0 ? !data1.empty() : !data2.empty()) {
      int presum = data1.top() + data2.top() + carry;
      carry = presum / 10;
      sum.push(presum % 10);
      data1.pop();
      data2.pop();
    }
    stack<int> *data;
    data = data1.size() > data2.size() ? &data1: &data2;
    while(!data->empty()) {
      int presum = data->top() + carry;
      carry = presum / 10;
      sum.push(presum % 10);
      data->pop();
    }

    if (carry != 0)
      sum.push(carry);

    if (sum.size() > 80) {
      cout << "overflow" << endl;
      continue;
    }

    if (overflow) {
      cout << overflow << endl;
    } else {
      for (int sum_i = 0; !sum.empty(); sum_i++) {
        cout << sum.top();
        sum.pop();
      }
      cout << endl;
    }
  }

  return 0;
}