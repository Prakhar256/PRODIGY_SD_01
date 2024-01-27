#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5.0 / 9.0;
}

// Function to convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Function to convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return kelvin * 9.0 / 5.0 - 459.67;
}

int main() {
    double temperature;
    char originalUnit;

    cout << "Enter the temperature value: ";
    cin >> temperature;

    cout << "Enter the original unit (C, F, or K): ";
    cin >> originalUnit;

    double convertedCelsius, convertedFahrenheit, convertedKelvin;

    switch (originalUnit) {
        case 'C':
        case 'c':
            convertedCelsius = temperature;
            convertedFahrenheit = celsiusToFahrenheit(temperature);
            convertedKelvin = celsiusToKelvin(temperature);
            break;
        case 'F':
        case 'f':
            convertedCelsius = fahrenheitToCelsius(temperature);
            convertedFahrenheit = temperature;
            convertedKelvin = fahrenheitToKelvin(temperature);
            break;
        case 'K':
        case 'k':
            convertedCelsius = kelvinToCelsius(temperature);
            convertedFahrenheit = kelvinToFahrenheit(temperature);
            convertedKelvin = temperature;
            break;
        default:
            cout << "Invalid unit. Please enter C, F, or K." << endl;
            return 1; 
    }

    cout << "Converted Temperatures:\n";
    cout << "Celsius: " << convertedCelsius << " °C\n";
    cout << "Fahrenheit: " << convertedFahrenheit << " °F\n";
    cout << "Kelvin: " << convertedKelvin << " K\n";

    return 0;
}
