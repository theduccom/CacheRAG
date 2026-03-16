#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>

using namespace std;

#define MAX_ORDER 80

void alignOrder(std::string& input1, std::string& input2);
int myAtoi(const char c);
void briefMyItoa(int num, char* dst);
void addTwoInputs(const std::string& input1, const std::string& input2, std::string& output);
bool overflowCheck(const std::string& output);

int main(void)
{
  int n;
  std::string input1, input2;
  std::string output;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> input1;
    std::cin >> input2;

    alignOrder(input1, input2);
    addTwoInputs(input1, input2, output);
    if (overflowCheck(output)) {
      std::cout << output << std::endl;
    }
    else {
      std::cout << "overflow" << std::endl;
    }
  }

  return 0;
}

void alignOrder(std::string& input1, std::string& input2)
{
  if (input1.size() == input2.size()) {
    return;
  }
  if (input1.size() < input2.size()) {
    std::swap(input1, input2);
  }
  int distance = input1.size() - input2.size();
  for (int i = 0; i < distance; i++) {
    input2.insert(0, "0");
  }
  return;
}

int myAtoi(const char c)
{
  return c - '0';
}

void briefMyItoa(int num, char* dst)
{
  if (num < 10) {
    dst[0] = '0' + num;
    dst[1] = '\0';
  }
  else {
    dst[0] = num / 10 + '0';
    dst[1] = num % 10 + '0';
    dst[2] = '\0';
  }
}

void addTwoInputs(const std::string& input1, const std::string& input2, std::string& output)
{
  int outputOrder = input1.size() + 1;
  output.resize(outputOrder);

  bool advance = false;
  for (int i = outputOrder - 2; i >= 0; i--) {
    int num1 = myAtoi(input1[i]);
    int num2 = myAtoi(input2[i]);
    int sum = num1 + num2;
    if (advance) {
      sum++;
    }
    char sumStr[10];
    briefMyItoa(sum, sumStr);
    if (sumStr[1] == '\0') {
      output[i + 1] = sumStr[0];
      advance = false;
    }
    else {
      output[i + 1] = sumStr[1];
      advance = true;
    }
    if (i == 0) {
      if (advance) {
        output[0] = '1';
      }
      else {
        output = output.substr(1);
      }
    }
  }
}

bool overflowCheck(const std::string& output)
{
  if (output.size() > MAX_ORDER) {
    return false;
  }
  return true;
}