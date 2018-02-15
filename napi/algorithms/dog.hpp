#pragma once

#include "../snakelib.hpp"

class Dog : public Algorithm
{
public:
    Metadata meta() override;
    Direction move(GameState &state) override;
};