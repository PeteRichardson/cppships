#include <iostream>

#include "ship.h"

int main() {
    ShipList ships = GetShips("../ships.csv");

    for (auto ship : ships)
        std::cout << ship << std::endl;

    std::cout << "Read " << ships.size() << " ships." << std::endl;
    return EXIT_SUCCESS;
}
