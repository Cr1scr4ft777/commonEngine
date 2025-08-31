#pragma once

#include "core/CommonEnginePCH.h"
#include "core/String.h"

namespace commonengine { namespace maths {
	struct COMMON_API Vec2D {
		float x, y;

		Vec2D();
		Vec2D(float scalar);
		Vec2D(float x, float y);
		Vec2D(const Vec3D& vector);

		Vec2D& Add(const Vec2D& other);
		Vec2D& Subtract(const Vec2D& other);
		Vec2D& Multiply(const Vec2D& other);
		Vec2D& Divide(const Vec2D& other);

		Vec2D& Add(float value);
		Vec2D& Subtract(float value);
		Vec2D& Multiply(float value);
		Vec2D& Divide(float value);

		friend Vec2D operator+(Vec2D left, const Vec2D& right);
		friend Vec2D operator-(Vec2D left, const Vec2D& right);
		friend Vec2D operator*(Vec2D left, const Vec2D& right);
		friend Vec2D operator/(Vec2D left, const Vec2D& right);

		friend Vec2D operator+(Vec2D left, float value);
		friend Vec2D operator-(Vec2D left, float value);
		friend Vec2D operator*(Vec2D left, float value);
		friend Vec2D operator/(Vec2D left, float value);

		bool operator==(const Vec2D& other) const;
		bool operator!=(const Vec2D& other) const;

		Vec2D& operator+=(const Vec2D& other);
		Vec2D& operator-=(const Vec2D& other);
		Vec2D& operator*=(const Vec2D& other);
		Vec2D& operator/=(const Vec2D& other);

		Vec2D& operator+=(float value);
		Vec2D& operator-=(float value);
		Vec2D& operator*=(float value);
		Vec2D& operator/=(float value);

		bool operator<(const Vec2D& other) const;
		bool operator<=(const Vec2D& other) const;
		bool operator>(const Vec2D& other) const;
		bool operator>=(const Vec2D& other) const;

		float Magnitude() const;
		Vec2D Normalise() const;
		float Distance(const Vec2D& other) const;
		float Dot(const Vec2D& other) const;

		String ToString() const;

		friend std::ostream& operator<<(std::ostream& stream, const Vec2D& vector);
	};
} }