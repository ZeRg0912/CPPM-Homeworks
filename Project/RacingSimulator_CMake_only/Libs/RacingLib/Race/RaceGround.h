#pragma once
#include "RaceAirGround.h"

enum class groundTransport;

class RaceGround : public RaceAirGround {
	std::vector<TRANSPORT*> createTransports(std::vector<TRANSPORT*>& arr, int distance) override;
	void printRegisterTableMenu(int distance) override;
};