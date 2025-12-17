#include <cmath>
#include <iostream>
#include <ostream>
#include <vector>

#define MAX 5

using std::cout, std::endl, std::string, std::vector;

bool hasprime(const vector<int> &);
bool isprime(int);

int main() {
  vector<int> myNums{
      12, 57, 24, 27, 12,
  };
  cout << hasprime(myNums) << endl;
  cout << isprime(71) << endl;
  cout << isprime(1) << endl;

  return 0;
}

bool hasprime(const vector<int> &nums) {
  for (int i{0}; i < nums.size(); i++)
    if (isprime(nums.at(i)))
      return true;
  return false;
}

bool isprime(int num) {
  if (num <= 1)
    return false;

  int max = sqrt(num);
  for (int i{2}; i <= max; i++)
    if (num % i == 0)
      return false;
  return true;
}