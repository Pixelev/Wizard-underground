#include "Stone.h"// подключение заголовочного файла камня 
#include "Map.h"

Stone::Stone(Vector2f position) {//конструктор класса 

	init();// метод задающий начальные параметры 

	setPosition(position);//метод задающий позицию 

	setSpeed(0.1);

}

void Stone::init() {// начальные параметры камня

	Image image;//создаем объект изображения камня

	image.loadFromFile("images/stone.png");//загружаем изображение камня

	texture.loadFromImage(image);//загружаем текстуру камня из изображения

	sprite.setTexture(texture);//задаём спрайту текстуру

	sprite.setScale(0.05, 0.05);
}

void Stone::setPosition(Vector2f position) {//задать позицию свитка 

	this->position = position;// задаём позицию свитка

	sprite.setPosition(position.x, position.y);//задать позицию спрайту

}

void Stone::setTextureRect(IntRect rect) {//задать текстуру 

	sprite.setTextureRect(rect); //задаём спрайту текстуру

}


Sprite Stone::getSprite() { //получить спрайт свитка 

	return sprite;// получаем спрайт свитка

}

void Stone::update()
{
	sprite.move(0, speed);
	position = sprite.getPosition();
	if (position.y > WINDOW_HEIGHT)
	{
		setPosition(Vector2f(position.x, 0));
	}
}

float Stone::getSpeed()
{
	return speed;
}

void Stone::setSpeed(float speed)
{
	this->speed = speed;
}
