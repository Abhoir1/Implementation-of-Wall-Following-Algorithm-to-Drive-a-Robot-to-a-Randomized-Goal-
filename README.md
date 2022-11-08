# rwa2_group8


This assignment is part of course ENPM809Y

Assignment Description

    1. This assignment consists of implementing the “wall following” algorithm to drive a robot to a goal. The goal is always reachable and is always adjacent to one of the 4 outer walls of a maze.
    2. For this assignment we have used a third-party library which provides a simulator to visualize the outputs of your program. This simulator also provides functionalities to detect the walls, set walls, change the color of cells, and set text.
    3. The simulator used in this assignment can be found at https://github.com/mackorone/mms. The simulator needs to be built with Qt before it can be used.
    4. There are two types of “wall following” algorithm [1]: left-hand rule and right-hand rule. The two algorithms work the same way except turning priority will be either to the left or to the right depending on the type of rule used. Both the algorithms are implemented in this assignment.
    5. The program should be able to work in maze having following characteristics
       
    • The maze dimension is 16 × 16 .
    • The maze has outer walls that are closed
    • The position (0, 0) is the cell located in the lower left corner of the maze.
       
How to build and run

    1. Run the simulator - ~/mms/bin/mms (this opens the window of simulator)
    2. You can select the maze ﬁle to load in the simulator. Any ﬁle located in the folder
       mazefiles/classic will work.
    3. Create a configuration to open a new window
       
    • Name - Use an arbitrary name to this configuration. Diﬀerent names can be
      used to create diﬀerent configurations.
      
    • Directory - Browse to the root directory of your package. (application in our case)
      
    • Build Command - g++ -std=c++17 -g main.cpp simulator/simulator.cpp robot/robot.cpp algorithm/algorithm.cpp -o main  (Command to run to generate the executable. You only need to provide relative paths to all your [*.cpp] ﬁles. Your program will not build if this ﬁeld is missing some [*.cpp] ﬁles. The last part of the command -o main is the name of the executable.)
      
    • Run Command - For left-hand rule approach - ./main -left
                                  For right-hand rule approach - ./main -right
Deliverables

    1. Write a function to generate a random goal position. The goal has to be adjacent to one of the outer walls. 
    • Mark the goal cell with the letter G
    • Set the color of the goal cell to red
    2. Set the outer walls of maze
    3. Implement the “wall following" algorithm for both the right-hand rule and the left-hand rule. 




