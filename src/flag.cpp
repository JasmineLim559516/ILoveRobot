#pragma once
#include "api.h"
#include "flag.hpp"

    Flag::Flag(uint8_t port) :
    flag {port}
    {};

    void Flag::set_flag(bool a_state)
    {
        flag.set_value(a_state);
        state = a_state;
    }

    bool Flag::get_state_flag()
    {
        return state;
    }