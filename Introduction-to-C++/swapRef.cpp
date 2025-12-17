#include <iostream>
#include <ostream>
#include <string>

using std::cout, std::cin, std::endl, std::string;

void swapRef(int &, int &);

int main() {
  int number;
  int secNumber;

  cout << "Enter two numbers: ";
  cin >> number >> secNumber;

  swapRef(number, secNumber);

  cout << "After swap: " << number << " " << secNumber << endl;

  return 0;
}

void swapRef(int &num1, int &num2) {
  int tmp = num1;
  num1 = num2;
  num2 = tmp;
}

// asterico acessa o valor da variavel apontada
//  sem asterico eh possivel mudar o endereco para quem o ponteiro vai apontar