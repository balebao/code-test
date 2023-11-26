#include <iostream>
#include <string>
using namespace std;
const int NUM_PLAYERS = 2;

// Define the SoccerPlayer structure
struct SoccerPlayer {
    string playerName;
    int playerNumber;
    int pointsScored;
};

// Function to input data for a soccer player
void inputPlayerData(SoccerPlayer& player) {
    cout << "Enter data for player #" << player.playerNumber << ":\n";
    cout << "Name: ";
    getline(cin >> ws, player.playerName);  // Allowing input with spaces
    cout << "Number: ";
    cin >> player.playerNumber;
    cout << "Points Scored: ";
    cin >> player.pointsScored;
}

int main() {
    // Create an array of SoccerPlayer structures for each player
    SoccerPlayer team[NUM_PLAYERS];

    // Input data for each player
    for (int i = 0; i < NUM_PLAYERS; ++i) {
        team[i].playerNumber = i + 1; // Player numbers start from 1
        inputPlayerData(team[i]);
    }

    // Display a table of player information
    cout << "\nPlayer Table:\n";
    cout << "------------------------------------------------\n";
    cout << "| Player # | Player Name      | Points Scored |\n";
    cout << "------------------------------------------------\n";
    int totalPoints = 0;
    int maxPoints = 0;
    int maxPointsPlayerNumber = 0;
    for (int i = 0; i < NUM_PLAYERS; ++i) {
        cout << "|    " << team[i].playerNumber << "     | ";
        cout.width(17);
        cout << left << team[i].playerName << " | ";
        cout.width(13);
        cout << right << team[i].pointsScored << " |\n";
        
        totalPoints += team[i].pointsScored;

        if (team[i].pointsScored > maxPoints) {
            maxPoints = team[i].pointsScored;
            maxPointsPlayerNumber = team[i].playerNumber;
        }
    }
    // cout << "------------------------------------------------\n";
    // cout << "| Total    |                   | " <<  setw(13) << totalPoints << " |\n";
    // cout << "------------------------------------------------\n";
    // cout << "Player #" << maxPointsPlayerNumber << " (" << team[maxPointsPlayerNumber - 1].playerName << ") has earned the most points.\n";

    return 0;
}
