#include "island.hpp"

Island::Island(size_t x, size_t y) : position_(x, y) {}

bool Island::operator==(const Island& island) const {
    return position_ == island.position_;
}
