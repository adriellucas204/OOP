#include <iostream>
#include <ostream>
#include <string>

using std::cout, std::cin, std::endl, std::string;

void swapPointer(int *, int *);

int main() {
  int number;
  int secNumber;

  cout << "Type two numbers: " << endl;
  cin >> number >> secNumber;

  swapPointer(&number, &secNumber);

  cout << "After swap: " << number << " " << secNumber << endl;

  return 0;
}

void swapPointer(int *num1, int *num2) {
  int tmp = *num2;
  *num2 = *num1;
  *num1 = tmp;
}

// asterico acessa o valor da variavel apontada
//  sem asterico eh possivel mudar o endereco para quem o ponteiro vai apontar