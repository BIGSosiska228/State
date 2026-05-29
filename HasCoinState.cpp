#include <iostream>
#include "HasCoinState.h"
#include "CoffeeMachine.h"

using namespace std;

HasCoinState::HasCoinState(CoffeeMachine* machine) : machine(machine) {}

void HasCoinState::InsertCoin()
{
    cout << "Монета уже вставлена\n";
}

void HasCoinState::SelectDrink()
{
    if (machine->GetDrinkCount() > 0)
    {
        cout << "Выбран напиток. Приготовление...\n";
        machine->SetState(machine->GetDispensingState());
    }
    else
    {
        cout << "Напитки закончились\n";
    }
}

void HasCoinState::Dispense()
{
    cout << "Сначала выберите напиток\n";
}
