#pragma once

#include "IComponent.h"



class HealthComponent : public IComponent
{
public:
			HealthComponent(int	health, int maxHealth);
			~HealthComponent();

	void	setHealth(int health);
	void	setMaxHealth(int maxHealth);

	int		getHealth() const;
	int		getMaxHealth() const;

private:
	int		_health;
	int		_maxHealth;
};