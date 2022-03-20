#pragma once

#include <SFML/Graphics.hpp>//����������� sfml 

using namespace sf;//������������� ������������ ��� sf 

class Stone {//����� ����� 

private://��������� ���� 

	Vector2f position;//������� ����� 

	Sprite sprite;//������ �����

	Texture texture;//�������� �����

	void init();//��������� �������� ����� 

	float speed;

public:
	void setPosition(Vector2f position);// ������ ������� �����

	void setTextureRect(IntRect rect);//������ �������� �����

	Stone(Vector2f position);//����������� ������ 

	Sprite getSprite();// �������� ������ �����

	void update();

	float getSpeed();

	void setSpeed(float speed);


};