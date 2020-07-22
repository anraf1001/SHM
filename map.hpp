#pragma once

#include <vector>

#include "island.hpp"

class Map {
public:
    Map();

    const std::vector<Island>& getIslands() const { return islands_; }

    constexpr static size_t SIZE_OF_MAP = 10;
    constexpr static size_t MAP_WIDTH = 50;
    constexpr static size_t MAP_HEIGHT = 50;

private:
    void generateMap();

    std::vector<Island> islands_;
    Island* currentPos_;
};
