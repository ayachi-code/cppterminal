#include <iostream>
#include <string>
#include <dirent.h>
#include <sys/stat.h>

using namespace std;

class Commands {
    public:
        string checkUserInput(string userCommand) {
            if (userCommand == "ls") {
                return "ls";
            } else if (userCommand == "pwd") {
                return "pwd";
            } else {
                return "404";
            }
        }
        int ls() {
            DIR* dir;
            dir = opendir(".");
            if (dir == NULL) {
                return -1;
            }

            closedir(dir);
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
        string result = userInput.checkUserInput(command);
        if (result == "ls") {
            cout << "<ls>";
        } else if (result == "pwd") {
            cout << "<pwd>"; //Execute pwd method
            int result = userInput.ls();
            if (result == -1) {
                cout << "Error can't show files"
            }
        } else if (result == "404") {
            cout << "command not found";
        }
        cin >> command;
    }

    return 0;
}