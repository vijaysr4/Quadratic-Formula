#include <iostream>
#include <cmath>

int main() {
  // Variable declaration
  double a, b, c;

  //user input 
  std::cout << "Enter a: ";
  std::cin >> a;
  
  std::cout << "Enter b: ";
  std::cin >> b;

  std::cout << "Enter c: ";
  std::cin >> c;
  
  //declaring variables for quadratic eq
  double root1, root2;
  
  //quadratic eq formula
  root1 = (-b + std::sqrt((b*b) - (4*a*c))) / (2*a);
  
  root2 = (-b - std::sqrt((b*b) - (4*a*c))) / (2*a);
  
  //final print statement
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";
}
