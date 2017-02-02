#include "AISystem.h"
#include "PositionComponent.h"
#include "HealthComponent.h"

#include <iostream>


AISystem::AISystem()
{
}


AISystem::~AISystem()
{
}


void AISystem::AddGameObject(GameObject* gameObject)
{
	_gameObjects.push_back(gameObject);
}
void AISystem::RemoveGameObject(GameObject* gameObject)
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
void AISystem::Update()
{
	for (int i = 0; i < _gameObjects.size(); i++)
	{
		switch (_gameObjects.at(i)->getType())
		{
		case GameObject::Type::Player:
			std::cout << "Updating Player AI ("
				<< static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getX()
				<< ", "
				<< static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getY()
				<< ") With health of: "
				<< static_cast<HealthComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Health))->getHealth()
				<< "/"
				<< static_cast<HealthComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Health))->getMaxHealth()
				<< std::endl;
			break;

		case GameObject::Type::Alien:
			std::cout << "Updating Alien AI ("
				<< static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getX()
				<< ", "
				<< static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getY()
				<< ")"
				<< ") With health of: "
				<< static_cast<HealthComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Health))->getHealth()
				<< "/"
				<< static_cast<HealthComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Health))->getMaxHealth()
				<< std::endl;
			break;

		case GameObject::Type::Dog:
			std::cout << "Updating Dog AI ("
				<< static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getX()
				<< ", "
				<< static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getY()
				<< ")"
				<< ") With health of: "
				<< static_cast<HealthComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Health))->getHealth()
				<< "/"
				<< static_cast<HealthComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Health))->getMaxHealth()
				<< std::endl;
			break;

		case GameObject::Type::Cat:
			std::cout << "Updating Cat AI ("
				<< static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getX()
				<< ", "
				<< static_cast<PositionComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Position))->getY()
				<< ")"
				<< ") With health of: "
				<< static_cast<HealthComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Health))->getHealth()
				<< "/"
				<< static_cast<HealthComponent*>(_gameObjects.at(i)->getComponent(IComponent::ComponentType::Health))->getMaxHealth()
				<< std::endl;
			break;

		default:
			break;
		}
	}
}