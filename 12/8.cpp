#include <iostream>
#include <string>
using namespace std;
const int MAX_SPEAKERS = 10;

// Define the Speaker structure
struct Speaker {
    string name;
    string phoneNumber;
    string speakingTopic;
    double feeRequired;
};

// Function to display the menu
void displayMenu() {
    cout << "\nSpeaker's Bureau Menu:\n";
    cout << "1. Enter speaker data\n";
    cout << "2. Modify speaker data\n";
    cout << "3. Display all speakers\n";
    cout << "4. Exit\n";
    cout << "------------------------\n";
}

// Function to enter speaker data
void enterSpeakerData(Speaker speakers[], int& speakerCount) {
    if (speakerCount < MAX_SPEAKERS) {
        cout << "\nEnter speaker data:\n";
        Speaker newSpeaker;
        cout << "Name: ";
        getline(cin >> ws, newSpeaker.name);  // Allowing input with spaces
        cout << "Telephone Number: ";
        getline(cin >> ws, newSpeaker.phoneNumber);  // Allowing input with spaces
        cout << "Speaking Topic: ";
        getline(cin >> ws, newSpeaker.speakingTopic);  // Allowing input with spaces
        cout << "Fee Required: $";
        cin >> newSpeaker.feeRequired;

        speakers[speakerCount] = newSpeaker;
        ++speakerCount;

        cout << "Speaker data entered successfully.\n";
    } else {
        cout << "Cannot add more speakers. Maximum limit reached.\n";
    }
}

// Function to modify speaker data
void modifySpeakerData(Speaker speakers[], int speakerCount) {
    if (speakerCount > 0) {
        cout << "\nEnter the index of the speaker to modify (0 to " << speakerCount - 1 << "): ";
        int index;
        cin >> index;

        if (index >= 0 && index < speakerCount) {
            cout << "\nEnter new data for the speaker:\n";
            cout << "Name: ";
            getline(cin >> ws, speakers[index].name);  // Allowing input with spaces
            cout << "Telephone Number: ";
            getline(cin >> ws, speakers[index].phoneNumber);  // Allowing input with spaces
            cout << "Speaking Topic: ";
            getline(cin >> ws, speakers[index].speakingTopic);  // Allowing input with spaces
            cout << "Fee Required: $";
            cin >> speakers[index].feeRequired;

            cout << "Speaker data modified successfully.\n";
        } else {
            cout << "Invalid index. Please enter a valid index.\n";
        }
    } else {
        cout << "No speakers available to modify.\n";
    }
}

// Function to display all speakers
void displayAllSpeakers(const Speaker speakers[], int speakerCount) {
    if (speakerCount > 0) {
        cout << "\nAll Speakers:\n";
        for (int i = 0; i < speakerCount; ++i) {
            cout << "Speaker #" << i << ":\n";
            cout << "Name: " << speakers[i].name << endl;
            cout << "Telephone Number: " << speakers[i].phoneNumber << endl;
            cout << "Speaking Topic: " << speakers[i].speakingTopic << endl;
            cout << "Fee Required: $" << speakers[i].feeRequired << endl;
            cout << "------------------------\n";
        }
    } else {
        cout << "No speakers available to display.\n";
    }
}

int main() {
    Speaker speakers[MAX_SPEAKERS];
    int speakerCount = 0;
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                enterSpeakerData(speakers, speakerCount);
                break;
            case 2:
                modifySpeakerData(speakers, speakerCount);
                break;
            case 3:
                displayAllSpeakers(speakers, speakerCount);
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.\n";
                break;
        }

    } while (choice != 4);

    return 0;
}
