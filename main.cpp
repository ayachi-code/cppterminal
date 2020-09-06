#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    string command = "pwd";
    string quit_key = "q";
    cout << "PLACEHOLDER-PC:";
    cin >> command;
    while (command != quit_key) {
        cout << "PLACEHOLDER-PC:";
        cin >> command;
    }

    return 0;
}