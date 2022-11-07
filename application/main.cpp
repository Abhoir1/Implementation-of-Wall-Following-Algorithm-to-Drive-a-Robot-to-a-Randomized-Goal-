
#include <iostream>
#include <string>

#include "simulator/simulator.h"
#include "robot/robot.h"
#include "algorithm/algorithm.h"

int main(int argc, char *argv[])
{
    rwa2group8::algorithm obj;
    std::unique_ptr<rwa2group8::algorithm> function;
    if(argc ==2){
        if (std::string(argv[1])=="-left")
        {
        std::cerr << "Left Handed Algorithm Initiated"<<std::endl;
        rwa2group8::algorithm obj;
        obj.run_left();
        std :: cerr << "Goal reached" << std :: endl;
        }
        else{
        std::cerr << "Right Handed Algorithm Initiated"<<std::endl;
        rwa2group8::algorithm obj;
        obj.run_right();
        std :: cerr << "Goal reached" << std :: endl;
        }
    }
    else {std::cerr << "Please enter value for algorithm"<<std::endl;}
}
