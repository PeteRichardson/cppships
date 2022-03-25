#include "ship.h"

#include <sstream>

Ship::Ship(std::string s) {
    std::istringstream csv_row(s);
    std::string field;

    std::getline(csv_row, field, ',');
    if ((field == "-") || (field == "?"))   // Handle ships with no launch year
        field="0";
    this->year_launched = stoi(field);
    std::getline(csv_row, this->name, ',');
    std::getline(csv_row, field, ',');
    this->guns = stoi(field);
    std::getline(csv_row, field, ',');
    this->rating = Ship::string2rating[field];
    std::getline(csv_row, this->notes, ',');
}

std::string Ship::ShortName() {
    return this->name + " " + std::to_string(this->year_launched);
}

bool Ship::IsValid() {
    return true;
}

std::ostream& operator<<(std::ostream& out, Ship s) {
    // Grampus: Fourth class (50g), 1802 -- Sold 1832
    out << s.name << ": " << Ship::rating2string[s.rating]<< " class (" << s.guns << "g), " << s.year_launched;
    return out;
}