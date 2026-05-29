#pragma once
#include "State.h"

class CoffeeMachine;

class DispensingState : public State
{
private:
    CoffeeMachine* machine;

public:
    DispensingState(CoffeeMachine* machine);

    void InsertCoin() override;
    void SelectDrink() override;
    void Dispense() override;
};
