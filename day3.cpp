#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string fileLine;
    ifstream DayThreeText("Resources/day3.txt");

    int Slope1Xs = 0;
    int Slope1Os = 0;
    int Slope2Xs = 0;
    int Slope2Os = 0;
    int Slope3Xs = 0;
    int Slope3Os = 0;
    int Slope4Xs = 0;
    int Slope4Os = 0;
    int Slope5Xs = 0;
    int Slope5Os = 0;
    int currentLine = 0;
    int slope1 = 0;
    int slope2 = 0;
    int slope3 = 0;
    int slope4 = 0;
    int slope5 = 0;
    while (getline (DayThreeText, fileLine)) {
        if (slope1 > (fileLine.length() - 1)) {
            slope1 = slope1 - (fileLine.length());
        }
        if (slope2 > (fileLine.length() - 1)) {
            slope2 = slope2 - (fileLine.length());
        }
        if (slope3 > (fileLine.length() - 1)) {
            slope3 = slope3 - (fileLine.length());
        }
        if (slope4 > (fileLine.length() - 1)) {
            slope4 = slope4 - (fileLine.length());
        }
        if (slope5 > (fileLine.length() - 1)) {
            slope5 = slope5 - (fileLine.length());
        }
        if (fileLine.at(slope1) == '.') {
            Slope1Os++;
        }
        if (fileLine.at(slope1) == '#') {
            Slope1Xs++;
        }
        if (fileLine.at(slope2) == '.') {
            Slope2Os++;
        }
        if (fileLine.at(slope2) == '#') {
            Slope2Xs++;
        }
        if (fileLine.at(slope3) == '.') {
            Slope3Os++;
        }
        if (fileLine.at(slope3) == '#') {
            Slope3Xs++;
        }
        if (fileLine.at(slope4) == '.') {
            Slope4Os++;
        }
        if (fileLine.at(slope4) == '#') {
            Slope4Xs++;
        }
        if ( currentLine % 2 == 0 ) {
            if (fileLine.at(slope5) == '.') {
                Slope5Os++;
            }
            if (fileLine.at(slope5) == '#') {
                Slope5Xs++;
            }
            slope5 = slope5 + 1;
        }
        slope1 = slope1 + 1;
        slope2 = slope2 + 3;
        slope3 = slope3 + 5;
        slope4 = slope4 + 7;
        currentLine++;
    }
    cout << "Part One:";
    cout << "\n";
    cout << Slope2Xs;
    cout << "\n";
    cout << "Part Two:";
    cout << "\n";
    cout << Slope1Xs * Slope2Xs * Slope3Xs * Slope4Xs * Slope5Xs;
    cout << "\n";
}
