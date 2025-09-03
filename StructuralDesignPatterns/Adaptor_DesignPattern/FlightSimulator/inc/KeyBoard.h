#pragma once
#include "Input.h"
#include <random>
class KeyBoard :
    public Input
{
public:
    static std::default_random_engine MyRand;
    bool SimulateInput();
    virtual bool Up()override;
    virtual bool Down()override;
    virtual bool Left()override;
    virtual bool Right()override;
    virtual ~KeyBoard() = default;
};

