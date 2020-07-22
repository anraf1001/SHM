#include <gtest/gtest.h>

#include "coordinates.hpp"

TEST(CoordinatesTest, shouldCheckIfCoordinatesAreEqual) {
    constexpr size_t x = 2;
    constexpr size_t y = 3;

    Coordinates coord1(x, y);
    Coordinates coord2(x, y);

    ASSERT_EQ(coord1, coord2);
}

TEST(CoordinatesTest, shouldCheckIfCoordinatesAreNotEqual) {
    Coordinates coord1(1, 2);
    Coordinates coord2(2, 3);

    ASSERT_FALSE(coord1 == coord2);
}
