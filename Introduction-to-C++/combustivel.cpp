#include <iostream>
#include <ostream>
#include <string>

using std::cout, std::cin, std::endl, std::string;

int main() {
  float fuelToFull;
  float kmDriven;

  while (true) {

    cout << "How many liters to fill the car tank? ";
    cin >> fuelToFull;
    if (fuelToFull == -1)
      break;
    cout << "How many kilometers have you driven? ";
    cin >> kmDriven;

    float fuelComs = kmDriven / fuelToFull;
    cout << "The comsuption is: " << fuelComs << endl;
  }

  cout << "Program ended." << endl;

  return 0;
}
