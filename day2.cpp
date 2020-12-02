#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Open the Text File
    string fileLine;
    ifstream DayTwoText("Resources/day2.txt");

    // Part 1 Code
    int validCountP1 = 0;
    int validCountP2 = 0;
    int line = 0;
    while (getline (DayTwoText, fileLine)) {
        line++;
        char token = ' ';
        string breakUp[3];
        int StringValue = 0;
        int oldChar = 0;
        for (int i = 0; i < fileLine.length(); i++) {
            if (fileLine.at(i) == token) {
                breakUp[StringValue] = fileLine.substr(oldChar, i-oldChar);
                StringValue++;
                oldChar = i+1;
            }
            else {
                breakUp[2] = fileLine.substr(oldChar, fileLine.length()-1);

            }
        }
        string range[2];
        for (int i = 0; i < breakUp[0].length(); i++) {
            if (breakUp[0].at(i) == '-') {
                range[0] = breakUp[0].substr(0, i);
                range[1] = breakUp[0].substr(i+1, breakUp[0].length()-i);
            }
        }
        string policy = breakUp[1].substr(0, 1);
        int matchedCount = 0;
        for (int i = 0; i < breakUp[2].length(); i++) {
            if (breakUp[2].at(i) == policy.at(0)) {
                matchedCount++;
            }
        }
        if ((matchedCount >= stoi(range[0])) && (matchedCount <= stoi(range[1]))) {
            validCountP1++;
        }
        if ((breakUp[2].at(stoi(range[0])-1) == policy.at(0)) && (breakUp[2].at(stoi(range[1])-1) != policy.at(0))) {
            validCountP2++;
        }
        if ((breakUp[2].at(stoi(range[1])-1) == policy.at(0)) && (breakUp[2].at(stoi(range[0])-1) != policy.at(0))) {
            validCountP2++;
        }
    }
    cout << "Part 1: \n";
    cout << validCountP1;
    cout << "\n";
    cout << "Part 2: \n";
    cout << validCountP2;
    cout << "\n";
}
