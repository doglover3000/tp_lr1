#include "Keeper.h"

Keeper::Keeper()
{
	_first = nullptr;
	_size = 0;
}

Keeper::~Keeper()
{
	ObjectofKeeper* tmp = _first;
	if (_size == 0)
		return;
	
	while (tmp->_nextobj != nullptr)
	{
		ObjectofKeeper* tmp2 = tmp;
		tmp2->_object->~Base();
		tmp = tmp->_nextobj;
	}
}

void Keeper::add(Base& obj)
{
	if (_size == 0)
	{
		_size++;
		_first = new ObjectofKeeper;
		_first->_object = &obj;
		_first->_nextobj = nullptr;
		return;
	}
	ObjectofKeeper* tmp = _first;
	while (tmp->_nextobj != nullptr)
		tmp = tmp->_nextobj;
	ObjectofKeeper* newobj = new ObjectofKeeper;
	newobj->_object = &obj;
	tmp->_nextobj = newobj;
	_size++;
}

void Keeper::remove(int i)
{
	if (i > _size || i < 0)
	{
		/////ОШИБКА
		cout << "Неверный индекс!" << endl;
		return;
	}
	if (_size == 1)
	{
		this->remove_all();
		return;
	}
	
	ObjectofKeeper* tmp = _first;
	ObjectofKeeper* prev = _first;

	for (int j = 0; j < i; j++)
	{
		prev = tmp;
		tmp = tmp->_nextobj;
	}

	if (tmp == prev)
		_first = tmp->_nextobj;
	else
		prev->_nextobj = tmp->_nextobj;
	tmp->_object->~Base();
	delete tmp->_object;
	delete tmp;
	_size--;
}

void Keeper::remove_all()
{
	ObjectofKeeper* tmp = _first;
	for (int i = 0; i < _size; i++)
	{
		ObjectofKeeper* tmp2 = tmp;
		tmp = tmp->_nextobj;
		tmp2->_object->~Base();
		delete tmp2->_object;
		delete tmp2;
	}
}

int Keeper::getsize()
{
	return _size;
}
