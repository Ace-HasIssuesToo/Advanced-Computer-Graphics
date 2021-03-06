#pragma once
#include "vector3.h"

class CBulletInfo
{
public:
	CBulletInfo(void);
	virtual ~CBulletInfo(void);
protected:
	// Indicate the status of this bullet
	bool m_bStatus;
	// The position of the bullet
	Vector3 position;
	// The direction of the bullet
	Vector3 direction;
	// The speed of the bullet
	float speed;
	// The lifetime of the bullet
	float lifetime;
public:
	// Initialise the CBulletInfo instance
	void Init(const Vector3 position, const Vector3 direction, const float speed, const float lifetime);
	
	// Set the status of this CBulletInfo instance
	void SetStatus(const bool bStatus);
	// Get the status of this CBulletInfo instance
	bool GetStatus(void);
	
	// Set the position of this CBulletInfo instance
	void SetPosition(const Vector3 position);
	// Get the position of this CBulletInfo instance
	Vector3 GetPosition(void);
	
	// Set the direction of this CBulletInfo instance
	void SetDirection(const Vector3 direction);
	// Get the direction of this CBulletInfo instance
	Vector3 GetDirection(void);
	
	// Set the speed of this CBulletInfo instance
	void SetSpeed(const float speed);
	// Get the speed of this CBulletInfo instance
	float GetSpeed(void);
	
	// Set the lifetime of this CBulletInfo instance
	void SetLifetime(const float lifetime);
	// Get the lifetime of this CBulletInfo instance
	float GetLifetime(void);
	// Update this CBulletInfo instance
	void Update(const double dt);
};

