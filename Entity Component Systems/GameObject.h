#pragma once

#include "IComponent.h"

#include <vector>

class GameObject
{
public:
	enum class Type
	{
		Player,
		Alien,
		Cat,
		Dog
	};

public:
								GameObject(Type type);
								~GameObject();

	void						AttachComponent(IComponent* component);
	void						DetachComponent(IComponent::ComponentType componentType);

	IComponent*					getComponent(IComponent::ComponentType componentType);
	std::vector<IComponent*>&	getComponents();
	Type						getType() const;

private:
	std::vector<IComponent*>	_components;
	Type						_type;
};

