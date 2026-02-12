// Assignment 1 - skeleton code

// Program to calculate transition energy using simple Bohr formula

#include<iostream>
#include<iomanip>

int main()
{
  // Declare variables here
  int atomic_number;

  // Ask user to enter atomic number
  std::cout << "Enter atomic number: ";
  std::cin >> atomic_number;
  // Ask user to enter initial and final quantum numbers

  // Compute photon energy, Delta E = 13.6*(Z^2)*(1/n_j^2-1/n_i^2) eV

  // Output answer
  std::cout << "Here is my answer: " << atomic_number << std::endl;

  return 0;
}
