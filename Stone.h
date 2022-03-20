#pragma once

#include <SFML/Graphics.hpp>//подключение sfml 

using namespace sf;//использование пространства имён sf 

class Stone {//класс камня 

private://приватный блок 

	Vector2f position;//позиция камня 

	Sprite sprite;//спрайт камня

	Texture texture;//текстура камня

	void init();//начальные значения камня 

	float speed;

public:
	void setPosition(Vector2f position);// задать позицию камня

	void setTextureRect(IntRect rect);//задать текстуру камня

	Stone(Vector2f position);//конструктор класса 

	Sprite getSprite();// получить спрайт камня

	void update();

	float getSpeed();

	void setSpeed(float speed);


};