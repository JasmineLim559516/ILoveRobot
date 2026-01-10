#pragma once
#include "api.h"

class Intake {
    private:
        //intake constructor
        pros::MotorGroup intake_motors;

        int current_velocity = 0;
        //int current_elevator_velocity = 0;




        //not used
        bool current_direction = true; //positive direction
        bool state = false; //not moving
        int OFF = 0;
        const int POSITIVE_DIRECTION = 600;
        const int NEGATIVE_DIRECTION = -600;
        
    public:
    
        //constructor
        Intake (int8_t port1, int8_t port2);

        void move(int dir);
        int get_velocity();
        //int get_elevator_velocity();
        void set_velocity(int velocity);
        //void set_elevator_velocity(int velocity);
        void stop();




        //not used
        /*
        void move_at_direction(bool direction);
        //getters and setters
        void toggle_intake();

        bool get_state();
        void set_state(bool state);

        void set_direction(bool direction); //true is positive, false is negative
        bool get_direction();
        void toggle_direction();
        */
};