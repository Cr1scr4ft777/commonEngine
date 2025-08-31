#include "Vec2D.h"

namespace commonengine { namespace maths {
	commonengine::maths::Vec2D::Vec2D()
		: x(0.0f), y(0.0f) {}

	Vec2D::Vec2D(float scalar)
		: x(scalar), y(scalar) { }

	Vec2D::Vec2D(float x, float y)
		: x(x), y(y) { }

	Vec2D::Vec2D(const Vec3D& vector)
	{
	}

	Vec2D& Vec2D::Add(const Vec2D& other)
	{
		x += other.x;
		y += other.y;
		return *this;
	}

	Vec2D& Vec2D::Subtract(const Vec2D& other)
	{
		x -= other.x;
		y -= other.y;
		return *this;
	}

	Vec2D& Vec2D::Multiply(const Vec2D& other)
	{
		x *= other.x;
		y *= other.y;
		return *this;
	}

	Vec2D& Vec2D::Divide(const Vec2D& other)
	{
		x /= other.x;
		y /= other.y;
		return *this;
	}

	Vec2D& Vec2D::Add(float value)
	{
		x += value;
		y += value;
		return *this;
	}

	Vec2D& Vec2D::Subtract(float value)
	{
		x -= value;
		y -= value;
		return *this;
	}

	Vec2D& Vec2D::Multiply(float value)
	{
		x *= value;
		y *= value;
		return *this;
	}

	Vec2D& Vec2D::Divide(float value) {
		x /= value;
		y /= value;
		return *this;
	}

	bool Vec2D::operator==(const Vec2D& other) const {
		return this->x == other.x && this->y == other.y;
	}

	bool Vec2D::operator!=(const Vec2D& other) const {
		return !(*this == other);
	}

	Vec2D& Vec2D::operator+=(const Vec2D& other)
	{
		return Add(other);
	}

	Vec2D& Vec2D::operator-=(const Vec2D& other)
	{
		return Subtract(other);
	}

	Vec2D& Vec2D::operator*=(const Vec2D& other)
	{
		return Multiply(other);
	}

	Vec2D& Vec2D::operator/=(const Vec2D& other)
	{
		return Divide(other);
	}

	Vec2D& Vec2D::operator+=(float value)
	{
		return Add(value);
	}

	Vec2D& Vec2D::operator-=(float value)
	{
		return Subtract(value);
	}

	Vec2D& Vec2D::operator*=(float value)
	{
		return Multiply(value);
	}

	Vec2D& Vec2D::operator/=(float value)
	{
		return Divide(value);
	}

	bool Vec2D::operator<(const Vec2D& other) const
	{
		return this->x < other.x && this->y < other.y;
	}

	bool Vec2D::operator<=(const Vec2D& other) const
	{
		return this->x <= other.x && this->y <= other.y;
	}

	bool Vec2D::operator>(const Vec2D& other) const
	{
		return this->x > other.x && this->y > other.y;
	}

	bool Vec2D::operator>=(const Vec2D& other) const
	{
		return this->x >= other.x && this->y >= other.y;
	}

	float Vec2D::Dot(const Vec2D& other) const {
		return (this->x * other.x) + (this->y * other.y);
	}


}}