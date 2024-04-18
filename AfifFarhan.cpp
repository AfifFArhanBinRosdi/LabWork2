/*
	File name      : LabWork2
	Program Purpose: Convert Temperature between Celsius and Fahrenheit or vice versa.
	Programmer	   : Afif Farhan Bin Rosdi
	Id number      : AM2311015186
	Date 		   : 19/04/2024
	
*/

#include <iostream>
using namespace std;

// Function prototypes
double celciusToFahrenheit(double celcius); // Function prototype for converting Celsius to Fahrenheit
double fahrenheitToCelcius(double fahrenheit); // Function prototype for converting Fahrenheit to Celsius

int main() {
    double temperature; // Variable to store the temperature entered by the user
    char scale; // Variable to store the scale entered by the user (C or F)
    
    cout << "Enter temperature: "; // Prompting the user to enter the temperature
    cin >> temperature; // Reading the temperature entered by the user
    
    cout << "Enter scale (C for Celcius, F for Fahrenheit): "; // Prompting the user to enter the scale
    cin >> scale; // Reading the scale entered by the user
        
    if (scale == 'C' || scale == 'c') { // Checking if the scale entered is Celsius
        double convertedTemp = celciusToFahrenheit(temperature); // Converting Celsius to Fahrenheit
        cout << "Converted temperature: " << convertedTemp << "F" << endl; // Displaying the converted temperature in Fahrenheit
    }
    else if  (scale == 'F' || scale == 'f') { // Checking if the scale entered is Fahrenheit
        double convertedTemp = fahrenheitToCelcius(temperature); // Converting Fahrenheit to Celsius
        cout << "Converted temperature: " << convertedTemp << "C" << endl; // Displaying the converted temperature in Celsius
    }
    else {
        // Handle invalid input
        cout << "Invalid scale entered!" << endl; // Displaying an error message for invalid scale input
    }
    
    return 0; // Indicating successful program termination
}

// Function to convert Celsius to Fahrenheit
double celciusToFahrenheit(double celcius) {
    return (celcius * 9/5) + 32; // Converting Celsius to Fahrenheit formula
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelcius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9; // Converting Fahrenheit to Celsius formula
}
