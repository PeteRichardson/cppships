//
// Created by Peter Richardson on 3/25/22.
//

#ifndef CPPSHIPS_SHIP_H
#define CPPSHIPS_SHIP_H

#include <string>
#include <iostream>

struct Ship {
public:
    enum class Rating : uint8_t {
        Unknown,
        First,
        Second,
        Third,
        Fourth,
    };

    inline static const char* rating_strings[] {
            "Unknown",
            "First",
            "Second",
            "Third",
            "Fourth",
    };
    static std::string rating2str(Rating r) {
        return rating_strings[static_cast<uint8_t>(r)];
    }

    unsigned int year_launched;
    std::string name;
    unsigned int guns;
    Rating rating;
    std::string notes;

};

std::ostream& operator<<(std::ostream&, Ship);

#endif //CPPSHIPS_SHIP_H
