#include <iostream>
#include <ostream>
#include <string>

using std::cout, std::cin, std::endl, std::string;

int main() {
  string studentName;
  float grade{0};
  float gradeInput;
  float meanGrade;

  cout << "Type the student's name: ";
  std::getline(cin, studentName);

  for (int i{3}; i < 6; i++) {
    cout << "Type the grade: ";
    cin >> gradeInput;
    grade = (gradeInput *= i, grade += gradeInput);
  }

  meanGrade = grade / 12;
  cout << "The student " << studentName << " has a mean grade of " << meanGrade
       << endl;
  cout << "Program ended." << endl;

  return 0;
}
