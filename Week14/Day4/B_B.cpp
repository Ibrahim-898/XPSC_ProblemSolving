#include <iostream>
#include <string>
using namespace std;

void solve() {
    int N;
    string encrypted;
    cin >> N >> encrypted;

    string decoded = "";
    int i = 0;

    while (i < N) {
        // Check for "aba" (represents 1)
        if (i + 2 < N && encrypted[i] == 'a' && encrypted[i + 1] == 'b' && encrypted[i + 2] == 'a') {
            decoded += '1';
            i += 3;  // Skip the 3 characters
        }
        // Check for "ab" (represents 0)
        else if (i + 1 < N && encrypted[i] == 'a' && encrypted[i + 1] == 'b') {
            decoded += '0';
            i += 2;  // Skip the 2 characters
        }
        else {
            // If neither "ab" nor "aba" can be matched, the password is corrupted
            cout << ":(" << endl;
            return;
        }
    }

    // If we successfully decoded the entire string, print the result
    cout << decoded << endl;
}

int main() {
    solve();
    return 0;
}
