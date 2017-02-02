#include "GameObject.h"



GameObject::GameObject(Type type)
	: _type(type)
{
}

GameObject::~GameObject()
{
}


void GameObject::AttachComponent(IComponent* component)
{
	_components.push_back(component);
}
void GameObject::DetachComponent(IComponent::ComponentType componentType)
{
	for (int i = 0; i < _components.size(); i++)
	{
		if (_components.at(i)->getType() == componentType)
		{
			_components.erase(_components.begin() + i);
			break;
		}
	}
}

IComponent* GameObject::getComponent(IComponent::ComponentType componentType)
{
	for (int i = 0; i < _components.size(); i++)
	{
		if (_components.at(i)->getType() == componentType)
		{
			return _components.at(i);
		}
	}
}
std::vector<IComponent*>& GameObject::getComponents()
{
	return _components;
}

GameObject::Type GameObject::getType() const
{
	return _type;
}