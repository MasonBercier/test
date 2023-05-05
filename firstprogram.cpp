#include <iostream>

using namespace std;

int main() {
    const int minutesPerHour = 60;
    const float PI = 3.14;
    //values that will not change; const
    int x = 21;
    double y = 23.3;
    char a = 'a';
    bool t = true;
    int e, f, g;
    e = f = g = 10;
    cout << e + f + g;
    cout << "\nI am " << x << " years old";
    return 0;
}

/*
    int - stores integers (whole numbers), without decimals, such as 123 or -123
    double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    string - stores text, such as "Hello World". String values are surrounded by double quotes
    bool - stores values with two states: true or false
*/