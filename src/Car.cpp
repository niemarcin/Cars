#include "Car.hpp"

#include <iostream>

Car::Car()
    : speed_(0) {
    std::cout << __FUNCTION__ << std::endl;
}

Car::~Car() {
    std::cout << __FUNCTION__ << std::endl;
}

void Car::turnLeft() {
    std::cout << __FUNCTION__ << std::endl;
}

void Car::turnRight() {
    std::cout << __FUNCTION__ << std::endl;
}

void Car::brake() {
    std::cout << __FUNCTION__ << std::endl;
    speed_ = 0;
}

void Car::accelerate(int speed) {
    std::cout << __FUNCTION__ << std::endl;
    speed_ = speed > 0 ? speed : 0;
}
