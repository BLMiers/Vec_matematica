#include "Vec2d.h"



Vec2d::Vec2d()
{
	x = 0;
	y = 0;
}

Vec2d::Vec2d(float a, float b)
{
	x = a;
	y = b;
}


Vec2d::~Vec2d()
{
}

void Vec2d::operator+(Vec2d & v)
{
	x = x + v.x;
	y = y + v.y;
}

Vec2d Vec2d::operator+=(Vec2d & v)
{
	Vec2d a;
	x += v.x;
	y += v.y;
	return a;
}

Vec2d Vec2d::operator-=(Vec2d & v)
{
	Vec2d a;
	x -= v.x;
	y -= v.y;
	return a;
}

void Vec2d::operator-(Vec2d & v)
{
	x = x - v.x;
	y = y - v.y;
}

void Vec2d::operator*(Vec2d & v)
{
	x = x*v.x;
	y = y*v.y;
}

Vec2d Vec2d::operator*=(Vec2d & v)
{
	Vec2d a;
	x *= v.x;
	y *= v.y;
	return a;
}

void Vec2d::operator/(Vec2d & v)
{
	x = x / v.x;
	y = y / v.y;
}

Vec2d Vec2d::operator/=(Vec2d & v)
{
	Vec2d a;
	x /= v.x;
	y /= v.y;
	return a;
}

float Vec2d::dot(Vec2d & v1, Vec2d & v2)
{
	x = v1.x*v2.x;
	y = v1.y*v2.y;
	return x + y;
}
