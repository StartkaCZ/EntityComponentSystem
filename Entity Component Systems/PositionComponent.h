#pragma once

#include "IComponent.h"



class PositionComponent : public IComponent
{
public:
	PositionComponent(int x, int y);
	~PositionComponent();

	void	setX(int health);
	void	setY(int maxHealth);

	int		getX() const;
	int		getY() const;

private:
	int		_x;
	int		_y;
};

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