#pragma once

#include <memory>

#include "cargo.hpp"
#include "ship.hpp"

class Player {
public:
    Player();

    std::shared_ptr<Ship> getShip() const { return ship_; }
    size_t getMoney() const { return money_; }
    size_t getAvailableSpace() const { return availableSpace_; }

    size_t getSpeed() const { return ship_->getSpeed(); }
    std::shared_ptr<Cargo> getCargo(size_t index) const;

private:
    std::shared_ptr<Ship> ship_;
    size_t money_;
    size_t availableSpace_;
};
