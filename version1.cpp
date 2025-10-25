 // This is a C++ program written in order to simulate a delivery drone.
#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <ctime>

    using namespace std;

// Function prototyping.
int weathercheck();
int obstacleDetect();

//Global variable declaration.
int obstacles = 10;
int weather = 1;
int battery = 100;
int rechargecount = 0;
int delays = 0;
int cancelledcount = 0;
int deliveries = 0;
char rechargeask;
int main()
{
    // Creating an interface for better formatting.
    cout << "---------------------------DRONE SIMULATOR----------------------------" << endl;
    cout << "----------------------------------------------------------------------" << endl;

    // Asking user if he wants to start the simulation or not.
    int permission;
    cout << "Enter 1 to start the simulation and enter -1 to end the simulation:\n";
    cin >> permission;

    if (permission == 1)
    {
        // prompting user to enter the location of delivery.
        char location;
        cout << "Enter the location at which you want delivery (A,B or C): ";
        cin >> location;

        // Using While loop for the repetition of process.
        while (battery > 0 && permission == 1)
        {
            // using switch statement for different locations.
            switch (location)
            {
            case 'A':
                if (battery > 20)
                {
                    cout << "Checking battery health." << endl;
                    this_thread::sleep_for(chrono::seconds(3));
                    cout << "Good battery health. Moving forward." << endl;
                    if (weather == 1)
                    {
                        cout << "Checking Weather." << endl;
                        this_thread::sleep_for(chrono::seconds(2));
                        weathercheck();
                        obstacleDetect();
                        if (obstacles > 5)
                        {
                            cout << "Package Delivered." << endl;
                            cout << "----------------------------------------------------------------------" << endl;
                            battery -= 13;
                            deliveries += 1;
                        }
                        else
                        {
                            cout << "Package Delivered." << endl;
                            cout << "----------------------------------------------------------------------" << endl;
                            battery -= 15;
                            deliveries += 1;
                            delays += 1;
                        }
                    }
                    if (weather == 2)
                    {
                        cout << "Checking Weather." << endl;
                        this_thread::sleep_for(chrono::seconds(2));
                        weathercheck();
                        this_thread::sleep_for(chrono::seconds(5));
                        cout << "Weather is clear now. Taking off." << endl;
                        if (obstacles > 5)
                        {
                            cout << "Package Delivered." << endl;
                            cout << "----------------------------------------------------------------------" << endl;
                            battery -= 13;
                            deliveries += 1;
                            delays += 1;
                        }
                        else
                        {
                            cout << "Package Delivered." << endl;
                            cout << "----------------------------------------------------------------------" << endl;
                            battery -= 15;
                            deliveries += 1;
                        }
                    }
                    if (weather == 3)
                    {
                        weathercheck();
                        battery = battery;
                        cancelledcount += 1;
                    }
                }
                else
                {
                    cout << "Battery low! Returing to base for a recharge." << endl;
                    cout << "Mission Abort." << endl;
                    cout << "----------------------------------------------------------------------" << endl;
                    battery = battery;
                    cancelledcount += 1;
                }
                break;
            case 'B':
                if (battery > 20)
                {
                    cout << "Checking battery health." << endl;
                    this_thread::sleep_for(chrono::seconds(3));
                    cout << "Good battery health. Moving Forward." << endl;
                    if (weather == 1)
                    {
                        cout << "Checking Weather." << endl;
                        this_thread::sleep_for(chrono::seconds(2));
                        weathercheck();
                        obstacleDetect();
                        if (obstacles > 5)
                        {
                            cout << "Package Delivered." << endl;
                            cout << "----------------------------------------------------------------------" << endl;
                            battery -= 6;
                            deliveries += 1;
                        }
                        else
                        {
                            cout << "Package Delivered." << endl;
                            cout << "----------------------------------------------------------------------" << endl;
                            battery -= 9;
                            delays += 1;
                            deliveries += 1;
                        }
                    }
                    if (weather == 2)
                    {
                        cout << "Checking Weather." << endl;
                        this_thread::sleep_for(chrono::seconds(2));
                        weathercheck();
                        this_thread::sleep_for(chrono::seconds(5));
                        cout << "Weather is clear now. Taking off." << endl;
                        if (obstacles > 5)
                        {
                            cout << "Package Delivered." << endl;
                            cout << "----------------------------------------------------------------------" << endl;
                            battery -= 6;
                            deliveries += 1;
                            delays += 1;

                        }
                        else
                        {
                            cout << "Package Delivered." << endl;
                            cout << "----------------------------------------------------------------------" << endl;
                            battery -= 9;
                            deliveries += 1;
                            delays += 1;
                        } 
                    }
                    if (weather == 3)
                    {
                        cout << "Checking Weather." << endl;
                        this_thread::sleep_for(chrono::seconds(2));
                        weathercheck();
                        battery = battery;
                        cancelledcount += 1;
                    }
                }
                else
                {
                    cout << "Battery low! Returing to base for a recharge." << endl;
                    cout << "Mission Abort." << endl;
                    cout << "----------------------------------------------------------------------" << endl;
                    battery = battery;
                    cancelledcount += 1;
                }
                break;
            case 'C':
                if (battery > 20)
                {
                    cout << "Checking battery health." << endl;
                    this_thread::sleep_for(chrono::seconds(3));
                    cout << "Good battery health. Moving Forward." << endl;
                    if (weather == 1)
                    {
                        cout << "Checking Weather." << endl;
                        this_thread::sleep_for(chrono::seconds(2));
                        weathercheck();
                        obstacleDetect();
                        if (obstacles > 5)
                        {
                            cout << "Package Delivered." << endl;
                            cout << "----------------------------------------------------------------------" << endl;
                            battery -= 16;
                            deliveries += 1;
                            delays += 1;
                        }
                        else
                        {
                            cout << "Package Delivered." << endl;
                            cout << "----------------------------------------------------------------------" << endl;
                            battery -= 19;
                            deliveries += 1;
                            delays += 1;
                        }
                    }
                    if (weather == 2)
                    {
                        cout << "Checking Weather." << endl;
                        this_thread::sleep_for(chrono::seconds(2));
                        weathercheck();
                        this_thread::sleep_for(chrono::seconds(5));
                        cout << "Weather is clear now. Taking off." << endl;
                        if (obstacles > 5)
                        {
                            cout << "Package Delivered." << endl;
                            cout << "----------------------------------------------------------------------" << endl;
                            battery -= 16;
                            deliveries += 1;
                            delays += 1;
                        }
                        else
                        {
                            cout << "Package Delivered." << endl;
                            cout << "----------------------------------------------------------------------" << endl;
                            battery -= 19;
                            deliveries += 1;
                            delays += 1;
                        }
                    }
                    if (weather == 3)
                    {
                        cout << "Checking Weather." << endl;
                        this_thread::sleep_for(chrono::seconds(2));
                        weathercheck();
                        battery = battery;
                        cancelledcount += 1;
                    }
                }
                else
                {
                    cout << "Battery low! Returing to base for a recharge." << endl;
                    cout << "Mission Abort." << endl;
                    cout << "----------------------------------------------------------------------" << endl;
                    cancelledcount += 1;
                }
                break;
            }
            if (battery > 20) {
                
                cout << "Your battery is " << battery << "." << endl;
                cout << "Do you want to recharge or continue?(Y/N)";
                cin >> rechargeask;
                if (rechargeask == 'Y') {
                    cout << "Going to base for a recharge." << endl;
                    this_thread::sleep_for(chrono::seconds(8));
                    cout << "Fully charged." << endl;
                    battery = 100;
                    rechargecount += 1;
                    
                }
                else {
                    cout << "Enter the location at which you want delivery (A,B or C): ";
                    cin >> location;
                }
            }
            else {
                cout << "Battery is low returning to base for a recharge.Mission Abort." << endl;
                battery = 100;
                rechargecount += 1;
                cancelledcount += 1;
                break;
            }
           
        }
    }
    else {
        cout << "Simulation ended." << endl;
    }
    cout << "---------------------------MISSION SUMMARY----------------------------" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "Total number of deliveries  =  " << deliveries << endl;
    cout << "Total number of delays  =  " << delays << endl;
    cout << "Total number of cancelled deliveries  =  " << cancelledcount << endl;
    cout << "Total number of recharges  =  " << rechargecount << endl;
    cout << "Current battery  =  " << battery << endl;
    return 0;
}


// Function Definitions.

int weathercheck()
{
    /*1 represents sunny weather, 2 represents windy weather
    and 3 represents rainy weather.*/

    srand(time(NULL));
    int weather = 1 + rand() % 3;

    if (weather == 1)
    {
        cout << "Clear Weather. Drone taking off." << endl;
    }
    else if (weather == 2)
    {
        cout << "Weather is too windy. Delaying delivery." << endl;
    }
    else if (weather == 3)
    {
        cout << "Weather not Clear. Too rainy. Aborting mission." << endl;
    }
    return weather;
}

int obstacleDetect()
{
    srand(time(NULL));
    int obstacles = 1 + rand() % 10;
    if (obstacles > 5)
    {
        cout << "Clear Path. Moving towards destination." << endl;
    }
    else
    {
        cout << "Obstacles present.Changing route." << endl;
    }
    return obstacles;
}