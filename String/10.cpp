//Replace Spaces with %20 (like URL encoding)
#include <iostream>
using namespace std;

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin >> ws, str); // Read line with spaces

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            result += "%20";
        else
            result += str[i];
    }

    cout << "After replacement: " << result << endl;
    return 0;
}
