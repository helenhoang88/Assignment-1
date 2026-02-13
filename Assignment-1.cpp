// Assignment 1 - skeleton code

// Program to calculate transition energy using simple Bohr formula

#include<iostream>
#include<iomanip>

int main()
{
  // Declare variables here
  int atomic_number;
  int initial_quantum_number;
  int final_quantum_number;

  // Ask user to enter atomic number
  std::cout << "Enter atomic number: ";
  std::cin >> atomic_number;
  // Ask user to enter initial and final quantum numbers
  std::cout << "Enter intial quantum number: ";
  std::cin >> initial_quantum_number;
  std::cout << "Enter final quantum number: ";
  std::cin >> final_quantum_number;
  // Compute photon energy, Delta E = 13.6*(Z^2)*(1/n_j^2-1/n_i^2) eV

  // Output answer
  std::cout << "Atomic number check!! " << atomic_number << std::endl;
  std::cout << "Inital quantum number check!! " << initial_quantum_number << std::endl;
  std::cout << "Final quantum number check!! " << final_quantum_number << std::endl;

  return 0;
}
