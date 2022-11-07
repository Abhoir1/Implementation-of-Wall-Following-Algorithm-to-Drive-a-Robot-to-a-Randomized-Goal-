#include "robot.h"
#include<cstdlib>
#include<ctime>

    void rwa2group8::Robot::set_direction(char dir){
        m_direction=dir;}

    void rwa2group8::Robot:: set_position(int x, int y){
        m_position.first= x;
        m_position.second =y;
    }