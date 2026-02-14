This is the template for the first assignment. 

# Tips on checking compilation

If you want to compile your code in the same way the demonstrators will compile it to check it, you can just write "make" in the console. 
This will use a the combination of the `make` command with a `Makefile` file that you will see in the same folder. In this case, doing this which in this case will run the following command:

`g++-11 assignment-1.cpp -o assignment-1.o -std=gnu++17`

The std=gnu++17 makes sure that the compiler you're using locally (which you should have installed following the instructions on the Quickstart guide on Blackboard/Git) picks up the same version of the C++ standards as the computers in the lab. 

This command will produce the following file in the same directory you're running on:

`g++-11 assignment-1.cpp -o assignment-1.o -std=gnu++17`

Which you can then execute in a terminal using: 

`./assignment-1.o`

You can find out more about Makefiles [here](https://www.gnu.org/software/make/manual/html_node/Introduction.html) or [in this simple starter guide](https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/) but we won't cover these in the course. 

# My thought process
Firstly, g++-11 does not work on my operating system (iOS Tahoe 26.2), so I changed the Makefile to compile with g++-13 instead, but it should also compile on g++-11.

I began by declaring all the integer input variables: the atomic number, the initial quantum number and the final quantum number. I also added the output to ask for all of these numbers and the input so the user could give an answer. After that, I declared the conversion factor from electron volts to joules as a constant, because it should not be changed.

Next, I implemented a while loop to allow the user to repeat calculations without restarting the program. I first declared a char variable so the user could type 'y' or 'n' to indicate whether they would like to do another calculation. The response is intially set to 'y' so the first calculation can be done inside the while loop, and then an input asking if the user would like to continue was added. A check to see if the user inputted a correct input ('y' or 'n') is added. while(true) loops the asking infinitely, unless the input was 'y' or 'n', which breaks the loops so the program can end or repeat itself.

After setting up the loop structure, I included checks for the integer inputs with std::cin.fail() to detect when a user entered something that was not an integer for the atomic number or quantum numbers. If this happened, I cleared the error using and removed the invalid input from the buffer, then asked the user to enter the value again.

I then added a check to ensure that the final quantum number is less than the initial quantum number. I placed the input for the quantum numbers inside a while(true) loop, so the asking repeats infinitely so long as the integers given are not possible. The loop only breaks if the condition final_quantum_number < initial_quantum_number. If not, the program prints an error message and asks for both numbers again After that, I added validation for the unit input. The user is asked whether they would like the output in electron volts or joules, and they must enter either 'e' or 'j'. I used a while loop to repeatedly prompt the user until one of these valid characters is entered if the input is not either 'e' or 'j'.

Once all input handling and validation were working correctly, I connected the user-provided values to the energy calculation. I passed the atomic number and quantum numbers into the energy formula and then implemented the energy calculation itself using the Bohr model formula. To keep the program organised and readable, I placed this calculation inside a separate function, photon_energy_calculation.

For the final output, I needed to print different answers depending on if the user wanted the answer in Joules or electron volts. If the user selects electron volts, the program prints the calculated energy directly. If joules are selected, the program multiplies the result by the conversion constant before printing. The precision in both answers was set to be 3 significant figures.

After looking over the code, I realised I could change the logic of the 'y' or 'n' question, making it more like the unit check instead. I replaced the while(true) loop with a loop that only runs when the input is incorrect. After asking the user whether they would like to perform another calculation, the program reads the input into a repeat_yn variable. I then added a while loop with the condition repeat_yn != 'y' && repeat_yn != 'n'. This means the loop only executes if the input is invalid. Inside the loop, the program prints an error message and asks for the input again. This continues until the user enters either 'y' or 'n', so does not need to break manually.