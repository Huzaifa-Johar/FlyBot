#  *Delivery Drone Simulator*  

---

##  **Team Information**
**Project Title:** *Delivery Drone Simulator*  

**Team Members:**  
- **Talal Tahir** – *Group Lead*  
- **Huzaifa Johar**  
- **Shahzaib Ali**  

---

##  **Overview / Problem Description**
- This program simulates a delivery drone that checks battery, weather, and obstacles before delivering a package.  
- It shows how drones make decisions like delaying, canceling, or continuing a delivery based on real conditions.  
- Just like real life, this simulator:  
  - Checks battery level before flying.  
  - Responds to weather conditions like wind or rain.  
  - Detects obstacles such as trees or buildings.  
  - Decides whether to delay or to abort the delivery.  
- At the end, it shows a summary of how many deliveries were successful, failed, or delayed.  
- It imitates the working of a real delivery drone in simulation form.  

---

##  **Program Design / Logic**

###  **Main Functions Used**
- `weatherCheck()` → Randomly sets weather (clear, windy, or rainy).  
- `obstacleDetect()` → Randomly checks for obstacles.  

###  **Logic Flow**
- The program starts and asks the user to press **1** to start the simulation or **-1** to end the simulation.  
- If the user presses **1** it asks for location of delivery.  
- Each location has different battery consumption.  
- Before moving forward it checks if battery is greater than 20.  
- If battery is greater than 20 it first checks the weather condition and then obstacles.  
- If battery is less than 20 it returns to base for recharge.  
- After each delivery it displays the remaining battery level.  

###  **Random Events**
- The program uses `rand()` to generate random numbers for weather and obstacles.  
- The `srand(time(NULL))` function ensures the program gets different random numbers each time it runs.     

---

##  **Work Distribution**
- **Shahzaib Ali** – designed the main logic and structure of the program.  
- **Talal Tahir** – handled the coding part and implemented the core functions.  
- **Huzaifa Johar** – worked as the documentor and tester — he created the README file.  

---

##  **Future Improvements**
- If we knew about classes, we could make the code easier and simpler to understand.
- It would also help us make the code more organized.


