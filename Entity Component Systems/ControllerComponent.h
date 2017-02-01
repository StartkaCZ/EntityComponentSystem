#pragma once

#include "IComponent.h"



class ControllerComponent : public IComponent
{
public:
	ControllerComponent();
	~ControllerComponent();
};



ControllerComponent::ControllerComponent()
	: IComponent::IComponent(IComponent::ComponentType::Controller)
{
}


ControllerComponent::~ControllerComponent()
{
}