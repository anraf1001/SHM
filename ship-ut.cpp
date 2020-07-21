#include <gtest/gtest.h>

#include "ship.hpp"

TEST(ShipTest, shouldAddAndSubtractCrew) {
    Ship ship(2, "ship", 4, 5, 7);

    EXPECT_EQ(ship.getCrew(), 0);
    ship += 2;
    EXPECT_EQ(ship.getCrew(), 2);
    ship -= 1;
    EXPECT_EQ(ship.getCrew(), 1);
}
