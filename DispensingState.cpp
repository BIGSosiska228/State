#include <iostream>
#include "DispensingState.h"
#include "CoffeeMachine.h"

using namespace std;

DispensingState::DispensingState(CoffeeMachine* machine) : machine(machine) {}

void DispensingState::InsertCoin()
{
    cout << "Подождите...\n";
}

void DispensingState::SelectDrink()
{
    cout << "Уже готовится\n";
}

void DispensingState::Dispense()
{
    cout << "Ваш напиток готов!\n";

    int count = machine->GetDrinkCount();
    machine->SetDrinkCount(count - 1);

    machine->SetState(machine->GetNoCoinState());
}
