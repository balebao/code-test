#include <iostream>
#include <string>
using namespace std;
// Define the structure for speaker data
struct Speaker {
    string name;
    string telephoneNumber;
    string speakingTopic;
    double fee;
};

// Function to display the menu
void displayMenu() {
    cout << "\nMenu:\n";
    cout << "1. Enter new speaker data\n";
    cout << "2. Change data for an existing speaker\n";
    cout << "3. Search for a speaker by topic\n";
    cout << "4. Display all speaker data\n";
    cout << "5. Exit\n";
}

// Function to enter new speaker data
void enterNewSpeakerData(Speaker& speaker) {
    cin.ignore(); // Clear the input buffer

    cout << "Enter speaker name: ";
    getline(cin, speaker.name);

    cout << "Enter telephone number: ";
    getline(cin, speaker.telephoneNumber);

    cout << "Enter speaking topic: ";
    getline(cin, speaker.speakingTopic);

    do {
        cout << "Enter speaking fee: $";
        cin >> speaker.fee;

        // Input validation: Check for negative fee
        if (speaker.fee < 0) {
            cout << "Speaking fee cannot be negative. Please enter a valid fee.\n";
        }
    } while (speaker.fee < 0);

    cout << "New speaker data entered successfully.\n";
}

// Function to change data for an existing speaker
void changeSpeakerData(Speaker& speaker) {
    cin.ignore(); // Clear the input buffer

    cout << "Enter new speaker name: ";
    getline(cin, speaker.name);

    cout << "Enter new telephone number: ";
    getline(cin, speaker.telephoneNumber);

    cout << "Enter new speaking topic: ";
    getline(cin, speaker.speakingTopic);

    do {
        cout << "Enter new speaking fee: $";
        cin >> speaker.fee;

        // Input validation: Check for negative fee
        if (speaker.fee < 0) {
            cout << "Speaking fee cannot be negative. Please enter a valid fee.\n";
        }
    } while (speaker.fee < 0);

    cout << "Speaker data updated successfully.\n";
}

// Function to search for a speaker by topic
void searchSpeakerByTopic(const Speaker speakers[], int numSpeakers, const string& keyword) {
    bool found = false;

    cout << "\nSpeakers with the topic \"" << keyword << "\":\n";
    cout << "---------------------------------------------\n";
    cout << "Name\t\tTelephone\t\tSpeaking Topic\t\tFee\n";
    cout << "---------------------------------------------\n";

    for (int i = 0; i < numSpeakers; ++i) {
        // Check if the keyword is found in the speakingTopic
        if (speakers[i].speakingTopic.find(keyword) != string::npos) {
            cout << speakers[i].name << "\t"
                      << speakers[i].telephoneNumber << "\t"
                      << speakers[i].speakingTopic << "\t\t$"
                      << speakers[i].fee << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No speaker found with the specified topic.\n";
    }

    cout << "---------------------------------------------\n";
}

// Function to display all speaker data
void displayAllSpeakerData(const Speaker speakers[], int numSpeakers) {
    cout << "\nAll Speaker Data:\n";
    cout << "---------------------------------------------\n";
    cout << "Name\t\tTelephone\t\tSpeaking Topic\t\tFee\n";
    cout << "---------------------------------------------\n";

    for (int i = 0; i < numSpeakers; ++i) {
        cout << speakers[i].name << "\t"
                  << speakers[i].telephoneNumber << "\t"
                  << speakers[i].speakingTopic << "\t\t$"
                  << speakers[i].fee << endl;
    }

    cout << "---------------------------------------------\n";
}

int main() {
    const int numSpeakers = 10;
    Speaker speakerArray[numSpeakers];

    int choice;

    do {
        displayMenu();
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter new speaker data:\n";
                enterNewSpeakerData(speakerArray[numSpeakers - 1]);
                break;

            case 2:
                cout << "\nEnter speaker index to change data (1-" << numSpeakers << "): ";
                int indexToChange;
                cin >> indexToChange;

                if (indexToChange >= 1 && indexToChange <= numSpeakers) {
                    cout << "\nEnter new data for speaker " << indexToChange << ":\n";
                    changeSpeakerData(speakerArray[indexToChange - 1]);
                } else {
                    cout << "Invalid index. Please enter a valid index.\n";
                }
                break;

            // case 3:
            //     cin.ignore(); // Clear the input buffer
            //     cout << "\nEnter topic keyword to search: ";
            //     string topicKeyword;
            //     getline(cin, topicKeyword);
            //     searchSpeakerByTopic(speakerArray, numSpeakers, topicKeyword);
            //     break;

            case 4:
                displayAllSpeakerData(speakerArray, numSpeakers);
                break;

            case 5:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please enter a valid choice (1-5).\n";
        }

    } while (choice != 5);

    return 0;
}
