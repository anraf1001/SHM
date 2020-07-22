#include "coordinates.hpp"

Coordinates::Coordinates(size_t x, size_t y) : postionX_(x), postionY_(y) {}

bool Coordinates::operator==(const Coordinates& coord) const {
    return postionX_ == coord.postionX_ && postionY_ == coord.postionY_;
}
