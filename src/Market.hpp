#pragma once

#include <iostream>
#include <array> // needed for c++ style arrays (stored on the stack) 
#include "MarketMaker.hpp"
#include "Trader.hpp"

class Market
{

public:

	// number of market makers stored in the market
	static const unsigned int MAX_MARKETMAKER_CAPACITY = 5;

	// number of traders stored in the market
	static const unsigned int MAX_TRADER_CAPACITY = 10;

private:

	// number of market makers in the market
	unsigned int m_market_maker_count;
	// number of traders in the market
	unsigned int m_trader_count;
	// storage array for the MarketMakers in the market
	std::array< MarketMaker, MAX_MARKETMAKER_CAPACITY > m_market_makers;

	// storage array for the Traders in this market
	std::array< Trader, MAX_TRADER_CAPACITY > m_traders;

public:

	Market();

	unsigned int get_asset_count();

	void add_market_maker(MarketMaker mm);

	void add_trader(Trader t);

	// clear all assets from the market
	void clear();

	// print out all the information about the market
	void print();
};