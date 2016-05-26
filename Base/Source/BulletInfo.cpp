#include "BulletInfo.h"


CBulletInfo::CBulletInfo(void)
	: m_bStatus(false)
	, speed(0)
	, lifetime(0)
{
}


CBulletInfo::~CBulletInfo(void)
{
}


// Initialise the CBulletInfo instance
void CBulletInfo::Init(	const Vector3 position, 
						const Vector3 direction, 
						const float speed, 
						const float lifetime)
{
	this->position = position;
	this->direction = direction;
	this->speed = speed;
	this->lifetime = lifetime;
	SetStatus( true );
}


// Set the status of this CBulletInfo instance
void CBulletInfo::SetStatus(const bool bStatus)
{
	this->m_bStatus = bStatus;
}


// Get the status of this CBulletInfo instance
bool CBulletInfo::GetStatus(void)
{
	return m_bStatus;
}

// Set the position of this CBulletInfo instance
void CBulletInfo::SetPosition(const Vector3 position)
{
	this->position = position;
}

// Get the position of this CBulletInfo instance
Vector3 CBulletInfo::GetPosition(void)
{
	return position;
}

// Set the direction of this CBulletInfo instance
void CBulletInfo::SetDirection(const Vector3 direction)
{
	this->direction = direction;
}

// Get the direction of this CBulletInfo instance
Vector3 CBulletInfo::GetDirection(void)
{
	return direction;
}
	
// Set the speed of this CBulletInfo instance
void CBulletInfo::SetSpeed(const float speed)
{
	this->speed = speed;
}

// Get the speed of this CBulletInfo instance
float CBulletInfo::GetSpeed(void)
{
	return speed;
}
	
// Set the lifetime of this CBulletInfo instance
void CBulletInfo::SetLifetime(const float lifetime)
{
	this->lifetime = lifetime;
}

// Get the lifetime of this CBulletInfo instance
float CBulletInfo::GetLifetime(void)
{
	return lifetime;
}

// Update this CBulletInfo instance
void CBulletInfo::Update(const double dt)
{
	// Check if the bullet is active
	if (GetStatus() == true)
	{
		// Update the position of the bullet
		SetPosition( GetPosition() + GetDirection() * GetSpeed() * dt );

		// Update the lifetime
		SetLifetime( GetLifetime() - dt );

		// Check if the lifetime is gone
		if (GetLifetime() < 0)
		{
			SetStatus( false );
		}
	}
}
