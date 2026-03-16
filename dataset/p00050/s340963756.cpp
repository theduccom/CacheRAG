#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

char buf[2000];

string replace(string orig, string from, string to) {
  while (1) {
    int itr = orig.find(from);
    if (itr == string::npos) return orig;
    orig = orig.replace(itr, from.size(), to);
  }
}

int main() {
  fgets(buf, sizeof(buf), stdin);
  string s1 = replace(buf, "peach", "unko");
  string s2 = replace(s1, "apple", "peach");
  string s3 = replace(s2, "unko", "apple");
  printf("%s", s3.c_str());
}