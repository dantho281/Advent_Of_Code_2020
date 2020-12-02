#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Open the Text File
    string fileLine;
    ifstream DayTwoText("Resources/day2.txt");

    // Part 1 Code
    int validCount = 0;
    while (getline (DayTwoText, fileLine)) {
        char token = ' ';
        string breakUp[3];
        int StringValue = 0;
        int oldChar = 0;
        for (int i = 0; i < fileLine.length(); i++) {
            if (fileLine.at(i) == token) {
                breakUp[StringValue] = fileLine.substr(oldChar, i-oldChar);
                cout << breakUp[StringValue];
                cout << "\n";
                StringValue++;
                oldChar = i+1;
            }
            else {
                breakUp[2] = fileLine.substr(oldChar, fileLine.length()-1);

            }
        }
        cout << breakUp[2];
        cout << "\n";

    }
}
