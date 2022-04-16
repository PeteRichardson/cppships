#include <iostream>
#include <filesystem>

#include "ship.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        auto exe_name = std::filesystem::path(*argv).stem().string();
        std::cerr << "# usage: " << exe_name << " <csv_file>..." << std::endl;
        exit(EXIT_SUCCESS);
    }

    ShipList ships(argv[1]);

    for (auto & ship : ships)
        std::cout << ship << std::endl;

    std::cout << "Read " << ships.size() << " ships." << std::endl;
    return EXIT_SUCCESS;
}
