#pragma once

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
protected:
	void raceTimeSort(std::vector<TRANSPORT*>& arr);
	static void registerTransport(std::vector<TRANSPORT*>& transports, TRANSPORT* type);
public:
	void raceBegin(int distance);
	void startRace(std::vector<TRANSPORT*>& arr, int distance);
	void printResultTable(std::vector<TRANSPORT*>& arr);
	void printRegistredTransports(std::vector<TRANSPORT*>& arr);
	virtual void printRegisterTableMenu(int distance);
	void printLastRegistredTransport(std::vector<TRANSPORT*>& arr);
	virtual std::vector<TRANSPORT*> createTransports(std::vector<TRANSPORT*>& arr, int distance);
	void clearTransports(std::vector<TRANSPORT*>& arr);
};