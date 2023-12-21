#pragma once
#include "spaceship.h"

class Player : public Spaceship {
private:
    void getInput();
    void warnNoShields() const;
    
public:
    static constexpr float Acceleration = 200.0f;
    static constexpr float MaxSpeed = 700.0f;
    static constexpr float MinSpeed = 150.0f;

    Player(std::size_t id);
    void Update() override;
};