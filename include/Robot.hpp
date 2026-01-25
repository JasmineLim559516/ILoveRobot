#pragma once
#include "intake.hpp"
#include "drivetrain.hpp"
#include "flag.hpp"


class Robot {
    private:
        pros::Controller m_controller {pros::E_CONTROLLER_MASTER}; 

        //robot components
        Drivetrain dt;
        Intake intake;
        Flag flag;

        //update robot components
        void update_intake();
        void update_drivetrain();
        void update_flag();

    public:
        Robot(int8_t left1, int8_t left2, int8_t left3, int8_t right1, int8_t right2, int8_t right3, int8_t intake1, int8_t intake2, uint8_t flag1);

        //update function for whole robot
        void update(std::string info);
};