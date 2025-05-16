===============================
     BALLISTIC SIMULATOR
===============================

This project is a dart shooting simulator that models the projectile's trajectory in 2D or 3D, depending on whether wind is considered. The program calculates the impact coordinates and awards a score based on the accuracy of the shot.

--------------------------------
FEATURES
--------------------------------
- 2D simulation (no wind) or 3D simulation (with wind)
- Considers gravity, air drag, and wind force
- Full trajectory calculation
- Checks whether the dart hits the target
- Score is awarded based on precision

--------------------------------
PROJECT STRUCTURE
--------------------------------
main.cpp         → Handles user interaction
balistique.cpp   → Contains physics calculation functions
balistique.h     → Constants and function declarations

--------------------------------
COMPILATION
--------------------------------
The project is written in C++. Use a compiler like g++.

Command:
    g++ main.cpp balistique.cpp -o simulator

--------------------------------
USAGE
--------------------------------
Run the program:

    ./simulator

Then input the following values:
- Initial speed of the projectile
- Elevation angle of the shot (in degrees)
- Lateral deviation angle of the shot (in degrees)
- Wind speed
- Wind angles (elevation + lateral deviation)

The program will display:
- Impact point coordinates (y and z)
- Score based on impact precision

--------------------------------
EXAMPLE
--------------------------------
Enter the initial speed of the projectile (m/s): 15  
Enter the elevation angle of the shot (degrees): 10  
Enter the lateral deviation angle (degrees): 0  
Enter the wind speed (m/s): 0  
Enter the wind elevation angle (degrees): 0  
Enter the wind lateral deviation angle (degrees): 0  

Impact coordinates: y = 0.0 m, z = 1.71 m  
Great! You scored 25 points!

--------------------------------
SCORING RULES
--------------------------------
Distance from the center of the target:

- ≤ 12.7 mm    → 50 points  
- ≤ 31.8 mm    → 25 points  
- ≤ 107 mm     → 10 points  
- ≤ target radius → 5 points  
- > target radius → 0 points  

--------------------------------
AUTHOR
--------------------------------
Clément Nairaud  
Electrical Engineering Student  
Université Jean Monnet  

Educational project – free to reuse or modify with credit to the author.
