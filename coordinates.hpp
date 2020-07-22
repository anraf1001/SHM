#pragma once

#include <cstddef>

class Coordinates {
public:
    Coordinates(size_t x, size_t y);

    bool operator==(const Coordinates& coord) const;

private:
    size_t postionX_;
    size_t postionY_;
};
