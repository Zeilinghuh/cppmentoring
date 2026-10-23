//header file library allowing input and output objects
#include <iostream> 
//we can use names for objects and variables from standard library without prefixing them with std::

using namespace std;
//both of these show up in 99% of C++ programs

int inputoutput() {
    //any code produce in int main() will be executed when the program is run
    cout << "Hello, World! \n";
    //\n gives new line
    //object used with << operator to output text to the console
    //casesensitive programming language
    //You can also exclude line 5, and simply write std::cout << "Hello, World!"; and it will work the same way
    cout << 3 << "\n\n";
    //double new line
    //must add this way for new line
    //write number to console by no curly brackets
    cout << 3 + 2 << endl;
    //can simply write equation
    //endl is another way to give new line  
//\n is called an escape sequence, makes cursor change position to beginning of line
//other examples of escape sequences are \t for tab, \b for backspace, \\ for backslash
    cout << "Hello, tab! \t";
    cout << "Ok!" << endl;
    return 0;
    //ends main function
}

int variables(){
    //different variables declared like type VariableName = value;
    int x = 5, x2 = 10;
    //stores whole numbers
    //commas and declaration let you set multiple variables
    double y = 3.14;
    //stores decimal numbers
    char z = 'A';
    //stores single characters
    string name = "John";
    //stores text
    bool isTrue = true;
    //stores true or false values
    const int constantValue = 100;
    //constant means value cannot
    cout << "Integer: " << x << endl;
    //can overwrite variables just by declaring again
    x = 10;
    cout << "Integer: " << x << endl;
    
    return 0;
}

int main() {
    variables();
    return 0;
}

 