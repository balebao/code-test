
#include <iostream>
#include <string>
using namespace std;
const int NUM_MONTHS = 12;

// Define the WeatherData structure
struct WeatherData {
    double totalRainfall;
    double highTemperature;
    double lowTemperature;
    double averageTemperature;
};

// Function to input weather data for a month
void inputWeatherData(WeatherData& month) {
    cout << "Enter weather data for the month:\n";
    cout << "Total Rainfall (in inches): ";
    cin >> month.totalRainfall;
    cout << "High Temperature (in degrees Fahrenheit): ";
    cin >> month.highTemperature;
    cout << "Low Temperature (in degrees Fahrenheit): ";
    cin >> month.lowTemperature;

    // Calculate average temperature
    month.averageTemperature = (month.highTemperature + month.lowTemperature) / 2.0;
}

int main() {
    // Create an array of WeatherData structures for each month
    WeatherData yearlyWeather[NUM_MONTHS];

    // Input weather data for each month
    for (int i = 0; i < NUM_MONTHS; ++i) {
        cout << "\nEnter data for Month " << i + 1 << ":\n";
        inputWeatherData(yearlyWeather[i]);
    }

    // Calculate and display statistics
    double totalYearlyRainfall = 0.0;
    double highestTemperature = yearlyWeather[0].highTemperature;
    double lowestTemperature = yearlyWeather[0].lowTemperature;
    int highestMonth = 1;
    int lowestMonth = 1;

    for (int i = 0; i < NUM_MONTHS; ++i) {
        totalYearlyRainfall += yearlyWeather[i].totalRainfall;

        if (yearlyWeather[i].highTemperature > highestTemperature) {
            highestTemperature = yearlyWeather[i].highTemperature;
            highestMonth = i + 1;
        }

        if (yearlyWeather[i].lowTemperature < lowestTemperature) {
            lowestTemperature = yearlyWeather[i].lowTemperature;
            lowestMonth = i + 1;
        }
    }

    double averageMonthlyTemperature = 0.0;
    for (int i = 0; i < NUM_MONTHS; ++i) {
        averageMonthlyTemperature += yearlyWeather[i].averageTemperature;
    }
    averageMonthlyTemperature /= NUM_MONTHS;

    cout << "\nStatistics for the Year:\n";
    cout << "Average Monthly Rainfall: " << totalYearlyRainfall / NUM_MONTHS << " inches\n";
    cout << "Total Yearly Rainfall: " << totalYearlyRainfall << " inches\n";
    cout << "Highest Temperature: " << highestTemperature << " degrees Fahrenheit (Month " << highestMonth << ")\n";
    cout << "Lowest Temperature: " << lowestTemperature << " degrees Fahrenheit (Month " << lowestMonth << ")\n";
    cout << "Average of Monthly Average Temperatures: " << averageMonthlyTemperature << " degrees Fahrenheit\n";

    return 0;
}
