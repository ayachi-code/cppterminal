#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Commands {
    public:
        string checkUserInput(string userCommand) {
            return userCommand;
        }
 };

int main() {
    Commands userInput;
    string command = "pwd";
    string quit_key = "q";
    cout << "PLACEHOLDER-PC:";
    cin >> command;
    while (command != quit_key) {
        cout << "PLACEHOLDER-PC:";
        //executes functions
        string foo = userInput.checkUserInput(command);
        cout << foo;
        cin >> command;
    }

    return 0;
}