#include <cctype>
#include <iostream>
#include <ostream>
#include <string>

using std::cout, std::endl, std::string;

void convertTolower(string &);

int main() {
  string randomstr{"ADR54754IELASKFNASFO"};
  convertTolower(randomstr);
  cout << randomstr << endl;
  return 0;
}

void convertTolower(string &word) {
  for (int i{0}; i < word.size(); i++) {
    word.at(i) = std::tolower(word.at(i));
  }
}
