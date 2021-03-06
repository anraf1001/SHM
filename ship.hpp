#pragma once

#include <string>

class Ship {
public:
    Ship();
    Ship(int id, size_t speed, size_t maxCrew);
    Ship(int id, const std::string& name, size_t speed, size_t maxCrew, size_t capacity);

    void setName(const std::string& newName);

    Ship& operator+=(const size_t num);
    Ship& operator-=(const size_t num);

    int getId() const { return id_; }
    std::string getName() const { return name_; }
    size_t getSpeed() const { return speed_; }
    size_t getMaxCrew() const { return maxCrew_; }
    size_t getCapacity() const { return capacity_; }
    size_t getCrew() const { return crew_; }

private:
    const int id_;
    std::string name_;
    size_t speed_;
    size_t maxCrew_;
    size_t capacity_;
    size_t crew_{};
};
