#include "ControllerSystem.h"
#include "PositionComponent.h"
#include "ControllerComponent.h"

#include <iostream>


ControllerSystem::ControllerSystem()
{
}


ControllerSystem::~ControllerSystem()
{
}


void ControllerSystem::AddGameObject(GameObject* gameObject)
{
	_gameObjects.push_back(gameObject);
}
void ControllerSystem::RemoveGameObject(GameObject* gameObject)
{
	for (int i = 0; i < _gameObjects.size(); i++)
	{
		if (_gameObjects.at(i) == gameObject)
		{
			_gameObjects.erase(_gameObjects.begin() + i);
			break;
		}
	}
}
void ControllerSystem::Update()
{
	for (int i = 0; i < _gameObjects.size(); i++)
	{
		switch (_gameObjects.at(i)->getType())
		{
		case GameObject::Type::Player:
			std::cout << "Updating Player by the use of a controller ("
				<< static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getX()
				<< ", "
				<< static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getY()
				<< ")"
				<< std::endl;
			break;

		case GameObject::Type::Alien:
			std::cout << "Updating Alien by the use of a controller ("
				<< static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getX()
				<< ", "
				<< static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getY()
				<< ")"
				<< std::endl;
			break;

		case GameObject::Type::Dog:
			std::cout << "Updating Dog by the use of a controller ("
				<< static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getX()
				<< ", "
				<< static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getY()
				<< ")"
				<< std::endl;
			break;

		case GameObject::Type::Cat:
			std::cout << "Updating Cat by the use of a controller ("
				<< static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getX()
				<< ", "
				<< static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getY()
				<< ")"
				<< std::endl;
			break;

		default:
			break;
		}
	}
}