//
// Created by Peter Richardson on 3/25/22.
//

#ifndef CPPSHIPS_SHIP_H
#define CPPSHIPS_SHIP_H

#include <string>
#include <iostream>
#include <map>
#include <vector>


struct Ship {
public:
    enum class Rating : uint8_t {
        Unknown,
        First,
        Second,
        Third,
        Fourth,
    };

    inline static std::map<Ship::Rating, std::string> rating2string {
        {Ship::Rating::Unknown, "Unknown"},
        {Ship::Rating::First, "First"},
        {Ship::Rating::Second, "Second"},
        {Ship::Rating::Third, "Third"},
        {Ship::Rating::Fourth, "Fourth"},
    };

    inline static std::map<std::string, Ship::Rating> string2rating {
        {"Unknown", Ship::Rating::Unknown},
        {"First", Ship::Rating::First},
        {"Second", Ship::Rating::Second},
        {"Third", Ship::Rating::Third},
        {"Fourth", Ship::Rating::Fourth},
    };

    unsigned int year_launched;
    std::string name;
    unsigned int guns;
    Rating rating;
    std::string notes;

    Ship(std::string);
    bool IsValid();

    std::string ShortName();
};

std::ostream& operator<<(std::ostream&, Ship);

using ShipList = std::vector<Ship>;
ShipList GetShips(std::string);


#endif //CPPSHIPS_SHIP_H
