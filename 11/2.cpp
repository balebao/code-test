#include <iostream>
#include <string>
using namespace std;
// Define the MovieData structure
struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime; // in minutes
    double productionCost;
    double firstYearRevenue;
};

// Function to display information about a movie, including first year's profit or loss
void displayMovieInfo(const MovieData& movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << "Production Cost: $" << movie.productionCost << endl;
    cout << "First Year Revenue: $" << movie.firstYearRevenue << endl;

    // Calculate and display first year's profit or loss
    double profitOrLoss = movie.firstYearRevenue - movie.productionCost;
    cout << "First Year's Profit/Loss: $" << profitOrLoss << endl;
    cout << "-------------------------\n";
}

int main() {
    // Create two MovieData variables and initialize their values
    MovieData movie1 = {"Inception", "Christopher Nolan", 2010, 148, 160000000, 825532764};
    MovieData movie2 = {"The Shawshank Redemption", "Frank Darabont", 1994, 142, 25000000, 58700000};

    // Display information about each movie
    cout << "Movie 1 Information:\n";
    displayMovieInfo(movie1);

    cout << "Movie 2 Information:\n";
    displayMovieInfo(movie2);

    return 0;
}
