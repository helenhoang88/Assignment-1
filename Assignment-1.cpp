// Assignment 1 - skeleton code

// Program to calculate transition energy using simple Bohr formula

#include<iostream>
#include<iomanip>

double photon_energy_calculation(int atomic_number, int initial_quantum_number, int final_quantum_number)
{
  const double rydberg_constant = 13.6;
  double energy = rydberg_constant * atomic_number * atomic_number * (1.0 / (final_quantum_number * final_quantum_number) - 1.0 / (initial_quantum_number * initial_quantum_number));
  return energy;
}

int main()
{
  char repeat_yn;
  repeat_yn = 'y';
  while(repeat_yn == 'y') 
  {
      int atomic_number;
      int initial_quantum_number;
      int final_quantum_number;
      char unit;
      const double ev_to_joule{1.60217663e-19};
      double photon_energy;

      std::cout<<"Enter atomic number: ";
      std::cin>>atomic_number;
      //loops if input format is incorrect
      while(std::cin.fail())
      {
        std::cout<<"Invalid input. Please enter an integer for atomic number: ";
        std::cin.clear();
        std::cin.ignore();
        std::cin>>atomic_number;
      }

      //loops if final quantum number is larger than initial
      while(true)
      {
        std::cout<<"Enter initial quantum number: ";
        std::cin>>initial_quantum_number;
        //loops if input format is incorrect
        while(std::cin.fail())
        {
          std::cout<<"Invalid input. Please enter an integer for initial quantum number: ";
          std::cin.clear();
          std::cin.ignore();
          std::cin>>initial_quantum_number;
        }

        std::cout<<"Enter final quantum number: ";
        std::cin>>final_quantum_number;
        //loops if input format is incorrect
        while(std::cin.fail())
        {
          std::cout<<"Invalid input. Please enter an integer for final quantum number: ";
          std::cin.clear();
          std::cin.ignore();
          std::cin>>final_quantum_number;
        }
        if(final_quantum_number < initial_quantum_number)
          break;
        std::cout<<"Final quantum number must be less than initial quantum number. Please enter again."<<std::endl;
      }

      std::cout<<"Enter unit (e for eV, j for Joules): ";
      std::cin>>unit;
      //loops if unit is invalid
      while(unit != 'e' && unit != 'j')
      {
        std::cout<<"Invalid input. Please enter 'e' for eV or 'j' for Joules: ";
        std::cin>>unit;
      }

      // Compute photon energy, Delta E = 13.6*(Z^2)*(1/n_j^2-1/n_i^2) eV
      photon_energy = photon_energy_calculation(atomic_number, initial_quantum_number, final_quantum_number);

      // Output answer
      if (unit == 'e')
        std::cout<<"The transition energy is: "<<std::setprecision(3)<<photon_energy<<" eV"<<std::endl;
      else
        std::cout<<"The transition energy is: "<<std::setprecision(3)<<photon_energy * ev_to_joule<<" Joules"<<std::endl;

      // Ask user if they want to do another calculation
      // Asks again if y or n is not given
      
      std::cout<<"Do you want to do another calculation? (y/n): ";
      std::cin>>repeat_yn;
      while(repeat_yn != 'y' && repeat_yn != 'n')
      {
        std::cout<<"Give a y or n!"<<std::endl;
        std::cout<<"Do you want to do another calculation? (y/n): ";
        std::cin>>repeat_yn;
      }
      if(repeat_yn == 'n'){
        std::cout<<"Goodbye!"<<std::endl;
      }
      else
        continue;
  }
  return 0;
}