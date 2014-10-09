#include <iostream>
#include "gameObject.h"

GameObject::GameObject(){
	x = 0;
	y = 0;
}
GameObject::GameObject(int posX, int posY){
	x = posX;
	y = posY;
}
GameObject::~GameObject(){

}

int GameObject::getX(){
	return x;
}
int GameObject::getY(){
	return y;
}
void GameObject::setX(int x){
	this->x = x;
}
void GameObject::setY(int y){
	this->y = y;
}
void GameObject::setPosition(int x, int y){
	this->x = x;
	this->y = y;
}