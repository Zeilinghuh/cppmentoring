//header file library allowing input and output objects
#include <iostream> 
#include <string>
#include <cmath>
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
int userInput() {
    int x;
    cout << "Enter a number: ";//type a number and press enter
    cin >> x;
    //cin is an object used with >> operator to get input from the user
    cout << "You entered: " << x << endl;
    return 0;
}
int dataTypes() {
    bool isTrue = true; //1byte, true or false
    char letter = 'A'; //1byte, stores single characters
    int number = 42; //4bytes, stores whole nums
    float decimalNumber = 3.14; //4bytes, stores decimal nums
    double largeDecimalNumber = 3.14159; //8bytes, stores larger decimal nums
    //float vs double: double has more precision and is larger in size than float(15 digits for double, 7 for float)
    //both can also be used for storing scientific numbers to power 10
    float f1=1.5e3; //1.5 * 10^3 = 1500
    double d1=2.5e-3; //2.5 * 10^-3 = 0.0025
    string text = "Hello, World!"; //stores text
    //usually requires #include <string> header file, but it is included in iostream
    auto autoVariable = 42; 
    //automatically deduces the type of variable based on the assigned value
    //auto only works when you assign value immediately
    //once type chosen, it cannot be changed later

    return 0;
}

int studentreportcard() {
    int studentID=12345;
    float score=95.5;
    char grade='A';
    cout << "Student ID: " << studentID << "\n";
    cout << "Score: " << score << "\n";
    cout << "Grade: " << grade << "\n";
    return 0;
}
int operators(){
    //arithmetic operators
    //addition,subtraction,multiplication,division as in other languages
    int a = 10, b = 3;
    cout << "modulus: " << a % b << endl; 
    //modulus operator gives remainder of division
    cout << "increment: " << ++a << endl;
    //increment operator increases value by 1 of variable
    cout << "decrement: " << --b << endl;
    //decrement operator decreases value by 1 of variable
    //asignment operators
    int x = 5;
    x += 3;
     // equivalent to x = x + 3
    //bitwise operators
    int c = 5; // binary: 0101
    int d = 3; // binary: 0011
    cout << "bitwise AND: " << (c & d) << endl; // binary: 0001
    cout << "bitwise OR: " << (c | d) << endl; // binary: 0111
    cout << "bitwise XOR: " << (c ^ d) << endl; //
    //can also be used as assignment operators like c &= d, c |= d, c ^= d
    //comparison operators
    int e = 5, f = 10;
    cout << "equal to: " << (e == f) << endl; // false
    cout << "not equal to: " << (e != f) << endl; // true
    cout << "greater than: " << (e > f) << endl; // false
    cout << "less than: " << (e < f) << endl; // true
    cout << "greater than or equal to: " << (e >= f) << endl; // false
    //logical operators
    bool g = true, h = false;
    cout << "logical AND: " << (g && h) << endl; // both are true=true
    cout << "logical OR: " << (g || h) << endl; // one is true=true
    cout << "logical NOT: " << (!(g && h)) << endl; // reverse result of logical AND, true
    //bodmas than equality, than logical, than assigment
    return 0;
}
int total_cost(){
    int itemprice = 50;
    int shippingcost = 5;
    int sum = itemprice + shippingcost;
    cout << "Total cost: " << sum << endl;
    return 0;
}
int stringmanipulation() {
    string str1 = "Hello ";
    string str2 = "World";
    string str3 = str1 + str2; // concatenation
    cout << "Concatenated string: " << str3 << endl;
    cout << "Length of str3: " << str3.length() << endl;
    //length() function returns the number of characters in the string
    cout << "Character at index 1: " << str3[1] << endl;
    //accessing individual characters using index, index starts from 0
    //can also use str3.at(1) to access character at index 1
    string str4 = "\"Hello World\"";
     // using escape sequence for double quotes
    cin >> str4;
    //get user input for string, stops at whitespace
    //as entered in console, only one whitespace allowed
    cout << "You entered: " << str4 << endl;
    getline(cin, str4);
    //get user input for string, allows whitespace
    cout << "You entered: " << str4 << endl;
    char charArray[] = "Hello";
    //char string is made in C originally but has access to different library
    return 0;
}
int mathfunctions() {
    double num = 9.0;
    cout << "Square root of " << num << " is " << sqrt(num) << endl;
    cout << "Power of 2 raised to 3 is " << pow(2, 3) << endl;
    cout << "Absolute value of -5 is " << abs(-5) << endl;
    cout << "Ceiling of 3.14 is " << ceil(3.14) << endl;
    cout << "Floor of 3.14 is " << floor(3.14) << endl;
    return 0;
}
int booleanlogic() {
    bool isTrue = true;
    bool isFalse = false;
    cout << "isTrue AND isFalse: " << (isTrue && isFalse) << endl; // false
    cout << "isTrue OR isFalse: " << (isTrue || isFalse) << endl; // true
    cout << "NOT isTrue: " << (!isTrue) << endl; // false
    //logical operators can be used to combine boolean values and expressions
    cout << boolalpha;
    //boolalpha is a manipulator that allows us to print boolean values as true or false instead of 1 or 0
    cout << "isTrue AND isFalse: " << (isTrue && isFalse) << endl; // false
    cout << "isTrue OR isFalse: " << (isTrue || isFalse) << endl; // true
    cout << "NOT isTrue: " << (!isTrue) << endl; // false
    cout<< noboolalpha;
    //resets the output format to default (1 or 0 for boolean values)

    return 0;
}
int ifstatements() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
    //alternatice to elseif statement short form is show below
    int time=20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result << endl;
    //structure is dataType dataName = (condition) ? result : (condition) ? result....
    //==
    if (time<18) {
        cout << "good day";
    } else {
        cout << "good evening";
    }
    int day=4;
    switch (day){
        case 1:
            cout << "monday";
            break;
        case 2:
            cout << "tues";
            break;
        case 3:
            cout << "wed";
            break;
        case 4:
            cout << "thurs";
            break;
        case 5:
            cout << "fri";
            break;
        case 6:
            cout << "sat";
            break;
        default:
            cout << "Sunday";
    }
    //when break leaves switch block
    //default is else
    return 0;
}
int whileloops(){
    int i=0;
    while (i<5){
        cout<<i<<"\n";
        i++;
    }
    //acts same as python while loop
    i=0;
    do {
        cout << i << "\n";
        i++;
    }
    while (i < 5);
    //executes code first, than checks condition
    int myNumbers[5] = {10,20,30,40,50};
    for (int num:myNumbers){
        cout << num << "\n";
    }
    //for each loop goes through each element in array
    string cars[] =  {"Volvo", "BMW", "Ford", "Mazda"};
    
    //declare name declare size
    
    return 0;
    //break can aslo jump out of loop
    //continue just passes

}

int main() {
    whileloops();
    return 0;
}

 