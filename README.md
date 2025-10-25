# *Delivery Drone Simulator*



## *Team Information*
* **Project Title:** Delivery Drone Simulator  
* **Team Members:**  
  * Huzaifa Johar – Logic Designer  
  * Zenu – Tester  
  * [Add more if needed] – Git Manager  


## *Overview / Problem Description*
This project is about a drone that delivers 3 packages in one day:  
* Location A  
* Location B  
* Location C  

Before each flight, the drone checks:  
* Weather (sunny, windy, or rainy)  
* Battery level  
* Obstacles (birds or restricted areas)  

Then it decides whether to:  
* Deliver the package  
* Delay the delivery  
* Return to base to recharge  

At the end, it shows a summary of how many deliveries were successful, failed, or delayed.

This project is important because it **simulates how real delivery drones work** and helps us understand decision-making in changing conditions.

## *Program Design / Logic*
* **Main Functions Used:**
  * startDay()
  * getWeather()
  * checkObstacle()
  * deliverPackage()
  * displaySummary()

* **Logic Flow:**
  * The program starts and shows the welcome message with 100% battery.  
  * Weather, battery drain, and obstacles are created randomly.  
  * The drone decides if it can fly or must delay/recharge.  
  * After all deliveries, a summary is shown.

* **Random Events:**
  * Weather: 1 = sunny, 2 = windy, 3 = rainy  
  * Battery drain: 10–25%  
  * Obstacle: yes or no  
  * Windy + low battery → recharge (+10%)  
  * Rainy → delay delivery  
  * Obstacle → reroute (+5% battery)






