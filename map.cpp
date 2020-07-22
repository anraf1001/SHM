#include "map.hpp"

#include <algorithm>
#include <numeric>
#include <random>

Map::Map() {
    islands_.reserve(SIZE_OF_MAP);
    generateMap();
}

void Map::generateMap() {
    std::random_device rd;
    std::mt19937 gen(rd());

    std::vector<size_t> positionX(MAP_WIDTH);
    std::vector<size_t> positionY(MAP_HEIGHT);

    std::iota(positionX.begin(), positionX.end(), 0);
    std::iota(positionY.begin(), positionY.end(), 0);

    std::shuffle(positionX.begin(), positionX.end(), gen);
    std::shuffle(positionY.begin(), positionY.end(), gen);

    for (int i = 0; i < SIZE_OF_MAP; i++) {
        islands_.emplace_back(positionX[i], positionY[i]);
    }
}
