#include <gtest/gtest.h>

#include "cargo.hpp"

TEST(CargoTest, shouldAddAndSubtractAmount) {
    // GIVEN
    constexpr size_t amount = 10;
    Cargo cargo("orange", amount, 5);
    ASSERT_EQ(cargo.getAmount(), amount);

    // WHEN
    cargo += 2;

    // THEN
    ASSERT_EQ(cargo.getAmount(), amount + 2);

    // WHEN
    cargo -= 2;

    // THEN
    ASSERT_EQ(cargo.getAmount(), amount);
}
