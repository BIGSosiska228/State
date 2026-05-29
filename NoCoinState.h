#pragma once
#include "State.h"

class CoffeeMachine;

class NoCoinState : public State
{
private:
    CoffeeMachine* machine;

public:
    NoCoinState(CoffeeMachine* machine);

    void InsertCoin() override;
    void SelectDrink() override;
    void Dispense() override;
};
