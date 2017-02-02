#include "PositionComponent.h"


PositionComponent::PositionComponent(int x, int y)
	: _x(x)
	, _y(y)
	, IComponent::IComponent(IComponent::ComponentType::Position)
{
}

PositionComponent::~PositionComponent()
{
}


void PositionComponent::setX(int health)
{
	_x = health;
}
void PositionComponent::setY(int maxHealth)
{
	_y = maxHealth;
}

int	PositionComponent::getX() const
{
	return _x;
}
int	PositionComponent::getY() const
{
	return _y;
}