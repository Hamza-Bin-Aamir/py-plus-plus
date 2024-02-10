#include "pyplusplus.hpp"

int main() {
    int x, y;

    // cleaner code
    print ("Welcome to PyPlusPlus demo v0.0.0-alpha")

    // easier inputs
    input ("Please enter an integer", x)
    print ("The input was " << x << " (int)")

    // easier to read ternary operator
    input ("Please enter another integer", y)
    IF_ELSE ( x>y, cout << "first input is greater", cout << "second input is greater" );
}
