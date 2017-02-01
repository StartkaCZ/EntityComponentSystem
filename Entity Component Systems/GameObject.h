#pragma once

#include "IComponent.h"

#include <vector>

class GameObject
{
public:
								GameObject();
								~GameObject();

	void						AttachComponent(IComponent component);
	void						DetachComponent(IComponent::ComponentType componentType);

	IComponent&					getComponent(IComponent::ComponentType componentType);
	std::vector<IComponent>&	getComponents();

private:
	std::vector<IComponent>		_components;
};

