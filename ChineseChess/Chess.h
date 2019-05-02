#pragma once
#include"pch.h"
using namespace std;
class Chess
{
public:
	Chess();
	Chess(int c, bool d, short x, short y);
	void dead();
	int getCamp();
	int getAlive();
	vector<short> getPosition();
	virtual void move();
	
private:
	int camp;
	bool alive;
	vector<short> position;
};

//�L
class Soldier :public Chess
{
public:
	Soldier(int c, bool d, short x, short y);
	vector<vector<short>>canGoList();
	virtual void move();
private:
	bool overRiver;
};

//��
class Cannon :public Chess
{
public:
	Cannon(int c, bool d, short x, short y);
	vector<vector<short>>canGoList();
	virtual void move();
	vector<vector<short>>canEat();
private:
};

//��
class Horse :public Chess
{
public:
	Horse(int c, bool d, short x, short y);
	vector<vector<short>>canGoList();
	virtual void move();
};

//��
class Car :public Chess
{
public:
	Car(int c, bool d, short x, short y);
	vector<vector<short>>canGoList();
	virtual void move();
};

//��
class Elephant :public Chess
{
public:
	Elephant(int c, bool d, short x, short y);
	vector<vector<short>>canGoList();
	virtual void move();
};

//�h
class Counselor :public Chess
{
public:
	Counselor(int c, bool d, short x, short y);
	vector<vector<short>>canGoList();
	virtual void move();
};

//��
class King :public Chess
{
public:
	King(int c, bool d, short x, short y);
	vector<vector<short>>canGoList();
	virtual void move();
};