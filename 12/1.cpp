#include <iostream>
#include <string>
using namespace std;
// Define the MovieData structure
struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime;
};

// Function to display information about a movie
void displayMovieInfo(const MovieData& movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << "------------------------\n";
}

int main() {
    // Create two MovieData variables and initialize their values
    MovieData movie1 = {"Inception", "Christopher Nolan", 2010, 148};
    MovieData movie2 = {"The Shawshank Redemption", "Frank Darabont", 1994, 142};

    // Display information about each movie using the function
    displayMovieInfo(movie1);
    displayMovieInfo(movie2);

    return 0;
}
