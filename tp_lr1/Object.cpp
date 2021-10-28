#include "Object.h"

Object::Object()
{
	objName = "object name";
}

Object::Object(string& objName)
{
	this->name(objName);
}

Object::~Object()
{
	objName.~basic_string();
}

void Object::name(string& name)
{
	objName = name;
}

string Object::getName()
{
	return objName;
}
