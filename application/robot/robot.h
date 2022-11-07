#ifndef __ROBOT__H
#define __ROBOT__H

#include <iostream>
#include<array>
#include<memory>

namespace rwa2group8 {

class Robot{

public:
char get_direction(){return m_direction;}
std::pair<int, int> get_position(){return m_position;}
void set_direction(char d);
void set_position(int x, int y);

private:
std :: pair<int , int> m_position;
char m_direction {'n'};

}; //class robot

}//namespace rwa2group8


#endif