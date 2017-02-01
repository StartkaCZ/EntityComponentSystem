#pragma once



class IComponent
{
public:
	enum class ComponentType
	{
		Position,
		Health,
		Controller,
	};

public:
					IComponent(ComponentType type);
					~IComponent();

	ComponentType	getType() const;

protected:
	ComponentType	_type;
};





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