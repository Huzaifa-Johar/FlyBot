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

// Global variable declaration.
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
        // Prompting user to enter the location of delivery.
        char location;
        cout << "Enter the location at which you want delivery (A,B or C): ";
        cin >> location;

        // Using While loop for the repetition of process.
        while (battery > 0 && permission == 1)
        {
            // Using switch statement for different locations.
            switch (location)
            {
                // -------------------- LOCATION A --------------------
            case 'A':
                if (battery > 20)
                {
                    cout << "Checking battery health." << endl;
                    this_thread::sleep_for(chrono::seconds(3));
                    cout << "Good battery health. Moving forward." << endl;
                    cout << "Checking Weather." << endl;
                    this_thread::sleep_for(chrono::seconds(2));
                    weather = weathercheck(); // 

                    if (weather == 1)
                    {
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
                            cout << "Package Delivered (Delayed due to obstacles)." << endl;
                            cout << "----------------------------------------------------------------------" << endl;
                            battery -= 15;
                            deliveries += 1;
                            delays += 1;
                        }
                    }
                    else if (weather == 2)
                    {
                        this_thread::sleep_for(chrono::seconds(5));
                        cout << "Weather is clear now. Taking off." << endl;
                        obstacleDetect();
                        cout << "Package Delivered (Delayed due to weather)." << endl;
                        cout << "----------------------------------------------------------------------" << endl;
                        battery -= 15;
                        deliveries += 1;
                        delays += 1;
                    }
                    else if (weather == 3)
                    {
                        cout << "Package not delivered." << endl;
                        cout << "----------------------------------------------------------------------" << endl;
                        cancelledcount += 1;
                        break;
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

                // -------------------- LOCATION B --------------------
            case 'B':
                if (battery > 20)
                {
                    cout << "Checking battery health." << endl;
                    this_thread::sleep_for(chrono::seconds(3));
                    cout << "Good battery health. Moving Forward." << endl;
                    cout << "Checking Weather." << endl;
                    this_thread::sleep_for(chrono::seconds(2));
                    weather = weathercheck(); // 

                    if (weather == 1)
                    {
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
                            cout << "Package Delivered (Delayed due to obstacles)." << endl;
                            cout << "----------------------------------------------------------------------" << endl;
                            battery -= 9;
                            delays += 1;
                            deliveries += 1;
                        }
                    }
                    else if (weather == 2)
                    {
                        this_thread::sleep_for(chrono::seconds(5));
                        cout << "Weather is clear now. Taking off." << endl;
                        obstacleDetect();
                        cout << "Package Delivered (Delayed due to weather)." << endl;
                        cout << "----------------------------------------------------------------------" << endl;
                        battery -= 9;
                        deliveries += 1;
                        delays += 1;
                    }
                    else if (weather == 3)
                    {
                        cout << "Package not delivered." << endl;
                        cout << "----------------------------------------------------------------------" << endl;
                        cancelledcount += 1;
                        break; // Stop further execution in case 'B'
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

                // -------------------- LOCATION C --------------------
            case 'C':
                if (battery > 20)
                {
                    cout << "Checking battery health." << endl;
                    this_thread::sleep_for(chrono::seconds(3));
                    cout << "Good battery health. Moving Forward." << endl;
                    cout << "Checking Weather." << endl;
                    this_thread::sleep_for(chrono::seconds(2));
                    weather = weathercheck(); // 

                    if (weather == 1)
                    {
                        obstacleDetect();
                        if (obstacles > 5)
                        {
                            cout << "Package Delivered." << endl;
                            cout << "----------------------------------------------------------------------" << endl;
                            battery -= 16;
                            deliveries += 1;
                        }
                        else
                        {
                            cout << "Package Delivered (Delayed due to obstacles)." << endl;
                            cout << "----------------------------------------------------------------------" << endl;
                            battery -= 19;
                            deliveries += 1;
                            delays += 1;
                        }
                    }
                    else if (weather == 2)
                    {
                        this_thread::sleep_for(chrono::seconds(5));
                        cout << "Weather is clear now. Taking off." << endl;
                        obstacleDetect();
                        cout << "Package Delivered (Delayed due to weather)." << endl;
                        cout << "----------------------------------------------------------------------" << endl;
                        battery -= 19;
                        deliveries += 1;
                        delays += 1;
                    }
                    else if (weather == 3)
                    {
                        cout << "Package not delivered." << endl;
                        cout << "----------------------------------------------------------------------" << endl;
                        cancelledcount += 1;
                        break;
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

            if (battery > 20)
            {
                cout << "Do you want to continue simulation? If yes then enter 1 and if no\nthen enter -1." << endl;
                cin >> permission;
                if (permission == 1) {
                    cout << "----------------------------------------------------------------------" << endl;
                    cout << "Your battery is " << battery << "%." << endl;
                    cout << "Do you want to recharge or continue?(Y/N)" << endl;
                    cin >> rechargeask;
                    if (rechargeask == 'Y')
                    {
                        cout << "Going to base for a recharge." << endl;
                        this_thread::sleep_for(chrono::seconds(8));
                        cout << "Fully charged." << endl;
                        cout << "----------------------------------------------------------------------" << endl;
                        battery = 100;
                        rechargecount += 1;
                        cout << "Enter the location at which you want delivery (A,B or C): ";
                        cin >> location;
                    }
                    else
                    {
                        cout << "----------------------------------------------------------------------" << endl;
                        cout << "Enter the location at which you want delivery (A,B or C): ";
                        cin >> location;
                    }
                }
            }
            else
            {
                cout << "Battery is low. Simulation ending. Mission Abort." << endl;
                battery = battery;
                cancelledcount += 1;
                break;
            }
        }
    }
    else
    {
        cout << "Simulation ended." << endl;
    }

    cout << "---------------------------MISSION SUMMARY----------------------------" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "Total number of deliveries  =  " << deliveries << endl;
    cout << "Total number of delays  =  " << delays << endl;
    cout << "Total number of cancelled deliveries  =  " << cancelledcount << endl;
    cout << "Total number of recharges  =  " << rechargecount << endl;
    cout << "Current battery  =  " << battery << "%" << endl;

    return 0;
}

// -------------------- FUNCTION DEFINITIONS --------------------

int weathercheck()
{
    /* 1 represents sunny weather, 2 represents windy weather,
       and 3 represents rainy weather. */
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
        cout << "Obstacles present. Changing route." << endl;
    }
    return obstacles;
}