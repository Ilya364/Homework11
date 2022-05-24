#include "Vehicle.h"

Vehicle::Vehicle(double speed, int numb_passeng, bool is_move):
	speed(speed),numb_passeng(numb_passeng),is_move(is_move){}

bool Vehicle::GetSpeed() const
{
	return speed;
}

bool Vehicle::GetNumbPas() const
{
	return numb_passeng;
}

bool Vehicle::GetIsMove() const
{
	return is_move;
}

Car::Car(double speed, int numb_passeng, bool is_move, std::string body_type) :
	Vehicle(speed, numb_passeng, is_move),body_type(body_type){}

std::string Car::GetBody()
{
	return std::string (body_type);
}

void Car::Print()
{
	std::cout << "Speed = " << GetSpeed() << " km/h" << std::endl;
	std::cout << "Number of passengers = " << GetNumbPas() << std::endl;
	std::cout << "Movement = " << GetSpeed() << std::endl;
	std::cout << "Body type - " << GetBody() << std::endl << std::endl;
}

Car::~Car() = default;

Bicycle::Bicycle(double speed, int numb_passeng, bool is_move, std::string tire_pressure) :
	Vehicle(speed, numb_passeng, is_move), tire_pressure(tire_pressure){}

std::string Bicycle::GetPressure()
{
	return std::string(tire_pressure);
}

void Bicycle::Print()
{
	std::cout << "Speed = " << GetSpeed() << " km/h" << std::endl;
	std::cout << "Number of passengers = " << GetNumbPas() << std::endl;
	std::cout << "Movement = " << GetSpeed() << std::endl;
	std::cout << "Tire pressure = " << GetPressure() << std::endl << std::endl;
}

Bicycle::~Bicycle() = default;

Bus::Bus(double speed, int numb_passeng, bool is_move, std::string route_type):
	Vehicle(speed,numb_passeng,is_move),route_type(route_type){}

std::string Bus::GetRoute()
{
	return std::string(route_type);
}

void Bus::Print()
{
	std::cout << "Speed = " << GetSpeed() << " km/h" << std::endl;
	std::cout << "Number of passengers = " << GetNumbPas() << std::endl;
	std::cout << "Movement = " << GetSpeed() << std::endl;
	std::cout << "Route type = " << GetRoute() << std::endl << std::endl;
}

Bus::~Bus() = default;
