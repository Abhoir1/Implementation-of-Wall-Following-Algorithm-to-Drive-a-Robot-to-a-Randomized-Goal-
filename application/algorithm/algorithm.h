#ifndef __ALGORITHM__H
#define __ALGORITHM__H

#include <iostream>
#include<array>
#include<memory>

namespace rwa2group8 {
    class algorithm{
    public:
    void run_left();
    void run_right();
    void init_outer_walls();
    void follow_wall_left();
    void follow_wall_right();
    void generate_goal();
    void set_right_wall(int x, int y, char dir);
    void set_front_wall(int x, int y, char dir);
    void set_left_wall(int x, int y, char dir);
    int x_coordinate{0};
    int y_coordinate{0};
    int x{0}, y{0};


    private:
    std :: unique_ptr<Robot> robot;
    std :: pair<int, int> goal;

    }; //class algorithm

}//namespace rwa2group8
#endif