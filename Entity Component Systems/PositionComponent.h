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