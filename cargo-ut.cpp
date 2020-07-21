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

TEST(CargoTest, shouldCheckIfCargosAreEqual) {
    // GIVEN
    const std::string name = "orange";
    constexpr size_t amount = 10;
    constexpr size_t basePrice = 5;

    // WHEN
    Cargo cargo1(name, amount, basePrice);
    Cargo cargo2(name, amount, basePrice);

    // THEN
    ASSERT_EQ(cargo1, cargo2);
}
