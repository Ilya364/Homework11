#pragma once
#include <iostream>

class Vehicle
{
	double speed;
	int numb_passeng;
	bool is_move;
public:
	Vehicle(double speed, int numb_passeng, bool is_move);
	virtual void Print() = 0;

	bool GetSpeed() const;
	bool GetNumbPas() const;
	bool GetIsMove() const;

	virtual ~Vehicle() = 0;
};

class Car:public Vehicle
{
	std::string body_type;
public:
	Car(double speed, int numb_passeng, bool is_move, std::string body_type);
	std::string GetBody();
	void Print() override;
	~Car() override;
};

class Bicycle :public Vehicle
{
	std::string tire_pressure;
public:
	Bicycle(double speed, int numb_passeng, bool is_move,std::string tire_pressure);
	std::string GetPressure();
	void Print() override;
	~Bicycle() override;
};

class Bus :public Vehicle
{
	std::string route_type;
public:
	Bus(double speed, int numb_passeng, bool is_move, std::string route_type);
	std::string GetRoute();
	void Print() override;
	~Bus() override;
};