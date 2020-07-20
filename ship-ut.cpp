#include <gtest/gtest.h>

#include "ship.hpp"

TEST(ShipTest, shouldFillSpecifiedParametersInShip) {
    Ship ship(2, "ship", 4, 5, 7);

    EXPECT_EQ(ship.getId(), 2);
    EXPECT_EQ(ship.getName(), "ship");
    EXPECT_EQ(ship.getSpeed(), 4);
    EXPECT_EQ(ship.getMaxCrew(), 5);
    EXPECT_EQ(ship.getCrew(), 0);
    EXPECT_EQ(ship.getCapacity(), 7);
}

TEST(ShipTest, shouldSetName) {
    Ship ship;

    ship.setName("Ship");

    EXPECT_EQ(ship.getName(), "Ship");
}

TEST(ShipTest, shouldAddAndSubtractCrew) {
    Ship ship(2, "ship", 4, 5, 7);

    EXPECT_EQ(ship.getCrew(), 0);
    ship += 2;
    EXPECT_EQ(ship.getCrew(), 2);
    ship -= 1;
    EXPECT_EQ(ship.getCrew(), 1);
}
