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