#include <iostream>
using namespace std;

int main() {
    int testCount;
    cin >> testCount;

    while (testCount--) {
        int length;
        cin >> length;

        string text;
        cin >> text;

        int frequency[26] = {0};

        for (char letter : text) {
            frequency[letter - 'a']++;
        }
  
        char maxChar = text[0];
        for (char letter : text) {
            if (frequency[letter - 'a'] > frequency[maxChar - 'a']) {
                maxChar = letter;
            }
        }
        char minChar = 0;
        for (char letter : text) {
            if (letter != maxChar) {
                if (minChar == 0 ||
                    frequency[letter - 'a'] < frequency[minChar - 'a']) {
                    minChar = letter;
                }
            }
        }

        if (minChar != 0) {
            for (char &letter : text) {
                if (letter == minChar) {
                    letter = maxChar;
                    break;
                }
            }
        }

        cout << text << "\n";
    }

    return 0;
}
