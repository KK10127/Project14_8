/*
 * CHAPTER 14, PROJECT 8
 * CS 151
 * Tu 5:30-9:20 with Porto
 * Programmer: Jay Montoya
 *
 *
 * PROBLEM STATEMENT:
 *      Write a recursive function that returns true if and only if the part of the string 'str' in positions 'lower'
 *      through 'upper' (inclusive at both ends). Test your program by writing a main function that repeatedly asks the
 *      user to enter strings terminated by the ENTER key. These strings are then tested for palindromicity. The program
 *      ends when the user presses the ENTER key without typing any characters before it.
 *
 * ALGORITHM for main():
 *
 *
 * ALGORITHM for isPalindrome(string str, int lower, int upper):
 *
 *
 */
#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(string str, int lower, int upper);

// main function
int main() {

    string str;
    int length;

    cout << "\nWelcome to the demo of project 8!\n" << endl;
    cout << "Please enter a string and press ENTER: ";

    cin >> str;

    do {
        length = (int) str.length();
        (isPalindrome(str, 0, length - 1)) ? cout << "\n\tTHIS IS A PALINDROME!!\n\n"
                                           : cout << "\n\tTHIS IS NOT A PALINDROME!!\n\n";
        cout << "Please enter another string and press ENTER (or press ENTER to end): ";
        cin >> str;

    } while (!str.empty());

    cout << "\n\nThis concludes the demo for this program!\n";
    return 0;
}

/*
 * This function determines whether the part of the string 'str' in positions 'lower' through 'upper' (inclusive at both
 * ends), is a palindrome.
 * PRE-CONDITION: str is given as a string. lower/upper are valid character positions in the string
 * POST-CONDITION: a boolean is returned determining palindromicity.
 */
bool isPalindrome(string str, int lower, int upper) {
    // get the char at lower and upper
    // compare, if false return false
    // if true recursively call the function with (lower + 1) and (upper - 1), only do this if these two new values
    // are NOT equal
    if (lower >= upper) { return true; } // we've reached the end condition with successful comparisons so far

    if (str[lower] == str[upper]) {
            return isPalindrome(str, (lower + 1), (upper - 1));
    } else {
        // cout << "\t\tFALSE CONDITION: lower = " << lower << " : upper = " << upper << endl;
        return false;
    }
}
