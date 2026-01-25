#pragma once
#include "api.h"

class Flag {
    private:
        pros::ADIDigitalOut flag;

        bool state = false;
    public:
        Flag(uint8_t port);

        bool get_state_flag();
        void set_flag(bool a_state);
};