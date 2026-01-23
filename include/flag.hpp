#pragma once
#include "api.h"

class Flag {
    private:
        pros::Motor flag_motor;
    public:
        Flag(int8_t port);
        void raise();
        void lower();
};