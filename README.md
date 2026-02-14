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

Once the repetition structure was working, I added input validation to handle incorrect data types using checks on the input stream. I then strengthened the validation by ensuring that the unit input was restricted to either 'e' or 'j', and that the final quantum number was less than the initial quantum number to enforce the correct physical ordering.
After the input and validation structure were complete, I connected the user-provided values to the energy calculation so that the inputs were passed into the formula. I then implemented the transition energy calculation itself using the Bohr formula within a separate function for clarity and separation of logic. Finally, I added the conversion to joules in the output stage so that the program could display the result in either electron volts or joules depending on the selected unit.