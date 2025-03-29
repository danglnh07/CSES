#include <iostream>
 
using namespace std;
 
int maxLength = 0, length = 1;
int startPtr = 0, endPtr = 1;
string adn;
 
int main() {
    cin >> adn;
 
    while (endPtr < (int) adn.size()) {
        if (adn[endPtr] == adn[startPtr]) {
            length++;
        } else {
            maxLength = max(maxLength, length);
            length = 1;
            startPtr = endPtr;
        }
        endPtr++;
    }
 
    if (maxLength < length)
        maxLength = length;
 
    cout << maxLength;
}