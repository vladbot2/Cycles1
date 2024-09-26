#include <iostream>

using namespace std;

//1
//void displayMenu() {
//    cout << "Menu:\n";
//    cout << "1. Enter a number\n";
//    cout << "2. Exit\n";
//    cout << "Choose an option: ";
//}
//

//2
//void drawChessboard(int size) {
//    for (int row = 0; row < 8; row++) {
//        for (int i = 0; i < size; i++) {
//            for (int col = 0; col < 8; col++) {
//                if ((row + col) % 2 == 0) {
//                    cout << "***";
//                }
//                else {
//                    cout << "---";
//                }
//            }
//            cout << endl;
//        }
//    }
//}

int main() 
{

    //1
//    int choice;
//    char number[100];
//    bool running = true;
//
//    while (running) {
//        displayMenu();
//        cin >> choice;
//
//        if (choice == 1) {
//            cout << "Enter a number: ";
//            cin >> number;
//
//            int digitCount = 0;
//            int sum = 0;
//            int zeroCount = 0;
//
//            int i = 0;
//            while (number[i] != '\0') {
//                if (number[i] >= '0') {
//                    if (number[i] <= '9') {
//                        digitCount++;
//                        sum += number[i] - '0';
//                        if (number[i] == '0') {
//                            zeroCount++;
//                        }
//                    }
//                }
//                i++;
//            }
//
//            int average = (digitCount > 0) ? sum / digitCount : 0;
//
//            cout << "Number of digits: " << digitCount << "\n";
//            cout << "Sum of digits: " << sum << "\n";
//            cout << "Arithmetic mean: " << average << "\n";
//            cout << "Number of zeros: " << zeroCount << "\n";
//
//        }
//        else if (choice == 2) {
//            cout << "Exiting the program.\n";
//            running = false;
//        }
//        else {
//            cout << "Invalid choice, please try again.\n";
//        }
//    }

    //2
    //int size;

    //cout << "Enter the size: ";
    //cin >> size;

    //drawChessboard(size);
}