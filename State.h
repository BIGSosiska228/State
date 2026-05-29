#pragma once

class State
{
public:
    virtual ~State() = default;

    virtual void InsertCoin() = 0;
    virtual void SelectDrink() = 0;
    virtual void Dispense() = 0;
};
