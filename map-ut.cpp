#include <gtest/gtest.h>

#include <algorithm>

#include "map.hpp"

struct MapTest : public ::testing::Test {
    Map map;

    bool areIslandsUnique() {
        auto islands = map.getIslands();
        return std::unique(islands.begin(), islands.end()) == islands.end();
    }
};

TEST_F(MapTest, shouldGenerate10IslandsOnTheMap) {
    ASSERT_EQ(map.getIslands().size(), 10);
}

TEST_F(MapTest, shouldGenerateUniqueIslands) {
    ASSERT_TRUE(areIslandsUnique());
}
