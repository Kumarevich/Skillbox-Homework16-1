#include <iostream>
#include <math.h>

bool compare (float speed) {
    return (speed >= -0.01) && (speed <= 0.01);
}

float speed_result (float speed, float delta) {
    speed += delta;
    if (speed > 150.0f) {
        speed = 150.0f;
    }
    if (speed < 0.0f) {
        speed = 0.0f;
    }
    return speed;
}

int main() {
    float speed = .0f;
    float delta = .0f;
    std::cout << "Input the speed increase: ";
    std::cin >> delta;
    speed = speed_result(speed, delta);
    while (!compare(speed)) {
        printf("Current speed: %3.1f \n", speed);
        std::cout << "Input the speed increase: ";
        std::cin >> delta;
        speed = speed_result(speed, delta);
    }
    std::cout << "You have stopped!";
    return 0;
}
