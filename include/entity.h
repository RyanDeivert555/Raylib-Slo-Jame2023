#pragma once
#include <cstddef>
#include "raylib.h"
#include "raymath.h"

class Entity {
public:
	static constexpr float DefaultSpeed = 150.0f;
	Vector2 Position{};
	Vector2 Direction{};
	float Speed = DefaultSpeed;
	float Rotation{};
	Vector2 Scale = Vector2One();
	bool Alive = true;
	bool ShouldDraw = true;
	std::size_t TextureId{};

	virtual ~Entity() = default;
	virtual Rectangle GetRect() const;
	virtual bool Collide(const Entity& other) const;
	void Kill();
	virtual void Update() {}
	virtual void Draw() const {}
};