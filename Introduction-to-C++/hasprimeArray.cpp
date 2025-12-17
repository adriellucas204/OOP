#include <array>
#include <cmath>
#include <iostream>
#include <ostream>

#define MAX 5

using std::cout, std::endl, std::string, std::array;

bool hasprime(const array<int, MAX> &);
bool isprime(int);

int main() {
  array<int, MAX> myNums{
      12, 57, 24, 27, 12,
  };
  cout << hasprime(myNums) << endl;
  cout << isprime(58) << endl;
  cout << isprime(13) << endl;

  return 0;
}

bool hasprime(const array<int, MAX> &nums) {
  for (int i{0}; i < nums.size(); i++)
    if (isprime(nums.at(i)))
      return true;
  return false;
}

// using square root to find
bool isprime(int num) {
  if (num <= 1)
    return false;
  
  int max = sqrt(num);
  for (int i{2}; i <= max; i++)
    if (num % i == 0)
      return false;
  return true;
}