
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s, word;
    string result = "";

    cout << "Enter a sentence: ";
    getline(cin, s);

    stringstream ss(s);

    while (ss >> word) {
        result = word + " " + result;
    }

    if (!result.empty()) {
        result.pop_back();
    }

    cout << "Reversed words: " << result << endl;

    return 0;
}
