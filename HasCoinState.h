#pragma once
#include "State.h"

class CoffeeMachine;

class HasCoinState : public State
{
private:
    CoffeeMachine* machine;

public:
    HasCoinState(CoffeeMachine* machine);

    void InsertCoin() override;
    void SelectDrink() override;
    void Dispense() override;
};
