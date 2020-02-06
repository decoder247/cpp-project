#include <iostream>
//#include <string>     // Already included in iostream
using namespace std;

//Variable declarations
unsigned short int a, b, c, d;
char compareOP = 't';       // Stored as a 1 byte integer

//Example sum function
int sum(int input1,int input2) {
    return input1+input2;
}
//Example comparator function
int returnL(int input1, int input2) {
    return (input1 > input2 ? input1 : input2);
}

//Main function
int main() {
    // Hello world line statement
    std::cout << "Hola!" << " This is the 2nd Sentence." << std::endl;
    std::cout << "This is the 2nd line with a line break at the end.\n\n";
    
    // 'cin' number entries
    std::cout << "Please enter first number: ";
    std::cin >> a;
    std::cout << "Please enter second number: ";
    std::cin >> b;
    
    // Sum and comparator operation
    c = sum(a,b);
    if (returnL(a,b) == a) {
        compareOP = '1';
    }
    else { if (returnL(a,b) == b) {
        compareOP = '2';
    } }

    // Output sum and larger number results
    std::cout << "\nThe sum of user inputs 1 and 2 is: " << c << std::endl;
    std::cout << "The larger number of the two is: 'input " << compareOP << "'\n";

    // Phase 2 of the main program commences
    std::cout << "\n---Phase 2 of the program will now commence---\n\n";

    // User input to commence looping function
    std::cout << "Do you want to loop the smaller number to incrementally add to reach the bigger one? (Y/N): ";
    std::cin >> compareOP;   

    // Looping function to increment smaller number to reach the larger number
    if (compareOP == 'Y') {
        d = sum(a,b) - returnL(a,b);    // Returns the smaller number
        std::cout << "START => ";

        // While function to incrementally add the smaller number
        while (d <= returnL(a,b)){
            std::cout << d++ << " ";
        }

        // End program statement
        std::cout << "<= END\n" << "Larger number reached!" << "\n\nPROGRAM END";
    }

    // If Y is not entered, end program statement
    else { if (compareOP == 'N') {
        std::cout << "\n\nPROGRAM END\n";
    } }

    return 0;
}