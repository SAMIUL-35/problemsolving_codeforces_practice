#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string word;
        cin >> word;

        vector<string> syllables;
        int i = 0;

        while (i < n) {
            string syllable;

            // Check for consonant followed by vowel (CV syllable)
            if ((word[i] == 'b' || word[i] == 'c' || word[i] == 'd') && i + 1 < n && (word[i + 1] == 'a' || word[i + 1] == 'e')) {
                syllable += word[i++];
                syllable += word[i++];
            } else {
                // Check for vowel with consonant before and after (CVC syllable)
                if ((word[i] == 'a' || word[i] == 'e') && i + 2 < n && (word[i + 2] == 'b' || word[i + 2] == 'c' || word[i + 2] == 'd')) {
                    syllable += word[i++];
                    syllable += word[i++];
                    syllable += word[i++];
                } else {
                    // Treat the character as a separate syllable
                    syllable += word[i++];
                }
            }

            syllables.push_back(syllable);
        }

        // Output the result
        for (int j = 0; j < syllables.size(); j++) {
            cout << syllables[j];

            if (j < syllables.size() - 1) {
                cout << ".";
            }
        }

        cout << endl;
    }

    return 0;
}
