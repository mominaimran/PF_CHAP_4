#include <iostream>
using namespace std;

int main() {
    double length, width, top, bottom, left, right; 
    double ptSize, spacingFactor;
    char spacingType;

    cout << "Enter length and width of paper(in inches):";
    cin >> length >> width;

    cout << "Enter four sided margins(top, bottom, left, right): ";
    cin >> top >> bottom >> left >> right;

    cout << "Enter point size: ";
    cin >> ptSize;

    cout << "Whether lines are double or single-spaced(s or d): ";
    cin >> spacingType;

    spacingFactor = (spacingType == 'd' || spacingType == 'D') ? 2.0 : 1.0;

    double printableWidth = width - (left + right);
    double printableHeight = length - (top + bottom);

    int charactersPerLine = (printableWidth * 72) / ptSize;
    int linesPerPage = (printableHeight * 72) / (ptSize * spacingFactor);

    cout << "\nCharacters per line: " << charactersPerLine << endl;
    cout << "Lines per page: " << linesPerPage << endl;

    return 0;
}