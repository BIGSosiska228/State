#pragma once
#include <memory>

class State;

class CoffeeMachine
{
private:
    std::shared_ptr<State> noCoinState;
    std::shared_ptr<State> hasCoinState;
    std::shared_ptr<State> dispensingState;
    std::shared_ptr<State> currentState;

    int drinkCount;

public:
    CoffeeMachine(int initialDrink = 5);

    void SetState(std::shared_ptr<State> state);

    void InsertCoin();
    void SelectDrink();
    void Dispense();

    std::shared_ptr<State> GetNoCoinState() const;
    std::shared_ptr<State> GetHasCoinState() const;
    std::shared_ptr<State> GetDispensingState() const;

    int GetDrinkCount();
    void SetDrinkCount(int count);
};
