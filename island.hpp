#pragma once

#include "coordinates.hpp"

class Island {
public:
    Island(size_t x, size_t y);

    Coordinates getPosition() const { return position_; }

    bool operator==(const Island& island) const;

private:
    Coordinates position_;
};
