/*
Program 2- 18 Energy Drink Consumption
Filename EnergyDrinkConsumption.cpp
Date 5/10/2026
Programmer: Thomas Pressey

Step 1. Create variables that hold the numbers: 16,500 for the customers and 0.15 for those who purchase one or more energy drinks per week.
Step 2. Of those 16,500 58% prefer citrus flavor. Create a variable to hold this number as well.
Step 3. Write a COUT statement that displays approximate number of customers in the survey who purchase one or more & The Appropriate number of customers who prefer citrus flavored drinks

*/

#include <iostream>
#include <iomanip>

    using namespace std;

    int main()
    {

        // Variables
        int customers = 16500;
        double multiPurchase = 0.15;
        double citrusENJOYERS = 0.58;

        // Calculations
        int energy_drinkers = customers * multiPurchase;
        int citrus_lovers = energy_drinkers * citrusENJOYERS;

        // Output
        cout << "Energy Drink Consumption Survey Results" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Total customers surveyed: " <<    customers << endl;
        cout << "Customers purchasing one or more per week: " << energy_drinkers << endl;
        cout << "Customers preferring citrus flavor: " << citrus_lovers << endl;

        return 0;
    }


