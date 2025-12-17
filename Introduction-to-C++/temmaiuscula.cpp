#include <iostream>
#include <ostream>
#include <string>

using std::cout, std::cin, std::endl, std::string;

bool hasUpper(string);

int main() {
  string name{"Adriel"};
  string randomlow{"28853789432fhgsg"};
  string randomupper{"2885A789432fhgsg"};

  cout << hasUpper(name) << endl;
  cout << hasUpper(randomlow) << endl;
  cout << hasUpper(randomupper) << endl;

  return 0;
}

// pensei na tabela ASCII, e fui atras saber de onde comeca ate qual numero tem
// as letras maiusculas, ai comparei elas

bool hasUpper(string word) {
  for (char chr : word) {
    if (chr >= 65 && chr <= 90) {
      return true;
    }
  }
  return false;
}

// asterico acessa o valor da variavel apontada
//  sem asterico eh possivel mudar o endereco para quem o ponteiro vai apontar