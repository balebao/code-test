#include <iostream>
#include <string>
using namespace std;
// Define the MovieData structure
struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime;
    double productionCost;
    double firstYearRevenue;
};

// Function to display information about a movie including profit or loss
void displayMovieInfo(const MovieData& movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << "Production Cost: $" << movie.productionCost << endl;
    cout << "First Year Revenue: $" << movie.firstYearRevenue << endl;

    // Calculate and display first year's profit or loss
    double profitLoss = movie.firstYearRevenue - movie.productionCost;
    cout << "First Year Profit/Loss: $" << profitLoss << endl;

    cout << "------------------------\n";
}

int main() {
    // Create two MovieData variables and initialize their values
    MovieData movie1 = {"Inception", "Christopher Nolan", 2010, 148, 160000000, 825532764};
    MovieData movie2 = {"The Shawshank Redemption", "Frank Darabont", 1994, 142, 25000000, 28341469};

    // Display information about each movie using the updated function
    displayMovieInfo(movie1);
    displayMovieInfo(movie2);

    return 0;
}
