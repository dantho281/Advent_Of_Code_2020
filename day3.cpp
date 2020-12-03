#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string fileLine;
    ifstream DayThreeText("Resources/day3.txt");

    int Xs = 0;
    int Os = 0;
    int numberOfLines = 0;
    int x = 0;
    while (getline (DayThreeText, fileLine)) {
        numberOfLines++;
        if (x > (fileLine.length() - 1)) {
            x = x - (fileLine.length());
        }
        if (fileLine.at(x) == '.') {
            Os++;
        }
        if (fileLine.at(x) == '#') {
            Xs++;
        }
        x = x + 3;
    }
    cout << Xs;
    cout << "\n";
    cout << Os;
}
