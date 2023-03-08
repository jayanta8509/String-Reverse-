#include <iostream>
#include <string>
using namespace std;
void reverse(string &str) {
  int start = 0;
  int end = str.length() - 1;
  while (start < end) {
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
  }
}
void printstr(string ok) {
  for (int i = 0; i < ok.length(); i++) {
    cout << ok[i] << "\t";
  }
}

int main() {
  // std::cout << "Hello World!\n";
  string str1 = "PRACHI";
  // int temp=str1.length();
  reverse(str1);
  printstr(str1);
  // cout<<temp;
}