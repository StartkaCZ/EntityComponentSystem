#include "IComponent.h"

IComponent::IComponent(ComponentType type)
	: _type(type)
{
}

IComponent::~IComponent()
{
}


IComponent::ComponentType IComponent::getType() const
{
	return _type;
}