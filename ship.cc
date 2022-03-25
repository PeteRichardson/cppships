#include "ship.h"


std::ostream& operator<<(std::ostream& out, Ship s) {
    // Grampus: Fourth class (50g), 1802 -- Sold 1832
    out << s.name << ": " << Ship::rating2str(s.rating) << " class (" << s.guns << "g), " << s.year_launched << " -- " << s.notes;
    return out;
}