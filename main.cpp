#include <iostream>
#include "CoffeeMachine.h"

using namespace std;

int main()
{
    CoffeeMachine machine(2);

    machine.SelectDrink();
    machine.InsertCoin();
    machine.SelectDrink();
    machine.Dispense();

    return 0;
}
