// Write a program which takes the day number of a week and displays a
// unique greeting message for the day.
#include<bits/stdc++.h>
using namespace std;

int main() {
    int dayNumber;
    std::cout << "Enter the day number (1-7): ";
    std::cin >> dayNumber;
    switch (dayNumber) {
        case 1:
            cout << "Hello! It's Monday. Have a great start to the week!" << endl;
            break;
        case 2:
            cout << "Hello! It's Tuesday. Keep up the good work!" << endl;
            break;
        case 3:
            std::cout << "Hello! It's Wednesday. Midweek vibes!" << endl;
            break;
        case 4:
            cout << "Hello! It's Thursday. Almost there, hang in!" << endl;
            break;
        case 5:
            cout << "Hello! It's Friday. Cheers to the weekend approaching!" << endl;
            break;
        case 6:
            std::cout << "Hello! It's Saturday. Enjoy your weekend!" << endl;
            break;
        case 7:
            cout << "Hello! It's Sunday. Relax and recharge!" << endl;
            break;
        default:
            cout << "Invalid day number. Please enter a number between 1 and 7." << endl;
            break;
    }

    return 0;
}
