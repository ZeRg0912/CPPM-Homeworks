#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

#include "../Transports/Ground/CAMEL.h"
#include "../Transports/Ground/FAST_CAMEL.h"
#include "../Transports/Ground/CENTAUR.h"
#include "../Transports/Ground/ALL_TERRAIN_BOOTS.h"

#include "../Transports/Flying/MAGIC_CARPET.h"
#include "../Transports/Flying/EAGLE.h"
#include "../Transports/Flying/BROOMSTICK.h"

enum class groundTransport;
enum class airTransport;
enum class allTransport;

class RaceAirGround {
public:
	void calculateRaceTime(std::vector<TRANSPORT*>& arr, int distance);
	void raceTimeSort(std::vector<TRANSPORT*>& arr);
	void printResultTable(std::vector<TRANSPORT*>& arr);
	void printRegistredTransports(std::vector<TRANSPORT*>& arr);
	void raceBegin(int distance);
	virtual std::vector<TRANSPORT*> createTransports(std::vector<TRANSPORT*>& arr, int distance);
	void clearTransports(std::vector<TRANSPORT*>& arr);
};