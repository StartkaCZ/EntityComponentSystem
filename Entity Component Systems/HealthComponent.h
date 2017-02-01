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




HealthComponent::HealthComponent(int health, int maxHealth)
	: _health(health)
	, _maxHealth(maxHealth)
	, IComponent::IComponent(IComponent::ComponentType::Health)
{
}

HealthComponent::~HealthComponent()
{
}


void HealthComponent::setHealth(int health)
{
	_health = health;
}
void HealthComponent::setMaxHealth(int maxHealth)
{
	_maxHealth = maxHealth;
}
	 
int	HealthComponent::getHealth() const
{
	return _health;
}
int	HealthComponent::getMaxHealth() const
{
	return _maxHealth;
}