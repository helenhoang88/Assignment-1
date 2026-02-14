// Assignment 1 - skeleton code

// Program to calculate transition energy using simple Bohr formula

#include<iostream>
#include<iomanip>

double photon_energy_calculation()
{

  return 0.0;
}

int main()
{
  char response;

  response = 'y';
  while (response == 'y') {
      int atomic_number;
      int initial_quantum_number;
      int final_quantum_number;
      char unit;
      const double ev_to_joule{1.60217663e-19};

      // Ask user to enter atomic number
      std::cout << "Enter atomic number: ";
      std::cin >> atomic_number;
      while (std::cin.fail())
      {
        std::cout << "Invalid input. Please enter an integer for atomic number: ";
        std::cin.clear();
        std::cin.ignore();
        std::cin >> atomic_number;
      }

      // Ask user to enter initial and final quantum numbers
      while (true)
      {
        std::cout << "Enter initial quantum number: ";
        std::cin >> initial_quantum_number;
        while (std::cin.fail())
        {
          std::cout << "Invalid input. Please enter an integer for initial quantum number: ";
          std::cin.clear();
          std::cin.ignore();
          std::cin >> initial_quantum_number;
        }

        std::cout << "Enter final quantum number: ";
        std::cin >> final_quantum_number;
        while (std::cin.fail())
        {
          std::cout << "Invalid input. Please enter an integer for final quantum number: ";
          std::cin.clear();
          std::cin.ignore();
          std::cin >> final_quantum_number;
        }

        if (final_quantum_number < initial_quantum_number)
        {
          break;
        }
        
        std::cout << "Final quantum number must be less than initial quantum number. Please enter again." << std::endl;
      }

      std::cout << "Enter unit (e for eV, j for Joules): ";
      std::cin >> unit;
      while (unit != 'e' && unit != 'j')
      {
        std::cout << "Invalid input. Please enter 'e' for eV or 'j' for Joules: ";
        std::cin >> unit;
      }

      // Compute photon energy, Delta E = 13.6*(Z^2)*(1/n_j^2-1/n_i^2) eV

      // Output answer
      std::cout << "The transition energy is: " << std::endl;

      // Ask user if they want to do another calculation
      while (true){
        std::cout << "Do you want to do another calculation? (y/n): ";
        std::cin >> response;
        if (response == 'n' || response == 'y')
          break;
        std::cout << "Gimme a y or n!!!" << std::endl;
      }
      if (response == 'n'){
        std::cout << "GUD BAI!!!" << std::endl;
      }
      else {
        continue;
      }
  }

  return 0;
}