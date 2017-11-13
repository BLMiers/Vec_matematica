#pragma once
class Vec2d
{
public:
	float x, y;
	Vec2d();
	Vec2d(float, float);
	~Vec2d();
	void operator+(Vec2d& v);
	Vec2d operator+=(Vec2d& v);
	void operator-(Vec2d& v);
	Vec2d operator-=(Vec2d& v);
	void operator*(Vec2d& v);
	Vec2d operator*=(Vec2d& v);
	void operator/(Vec2d& v);
	Vec2d operator/=(Vec2d& v);
	float dot(Vec2d& v1, Vec2d& v2);
	
};

