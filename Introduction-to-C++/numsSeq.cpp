#include <iostream>
#include <ostream>

int numSequence() {
  static unsigned num{0};

  return num++;
}

int main() {
  std::cout << "Number: " << numSequence() << std::endl;
  std::cout << "Number: " << numSequence() << std::endl;
  std::cout << "Number: " << numSequence() << std::endl;
  std::cout << "Number: " << numSequence() << std::endl;
  std::cout << "Number: " << numSequence() << std::endl;
  std::cout << "Number: " << numSequence() << std::endl;
  std::cout << "Number: " << numSequence() << std::endl;

  return 0;
}
