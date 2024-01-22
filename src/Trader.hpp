#pragma once

#include <iostream>
#include <array> // needed for c++ style arrays (stored on the stack) 
#include "Asset.hpp"

class Trader
{
public:

	// Trader holds up to 15 assets
	static const int MAX_ASSET_CAPACITY = 15;

private:

	// current amount of assets
	unsigned int m_asset_count;

	// assets for the trader are stored in this array
	std::array< Asset, MAX_ASSET_CAPACITY > m_assets;

public:

	Trader();

	// retreive the total number of assets in the Trader
	unsigned int get_asset_count();

	// add an asset to the Trader
	void add_asset(Asset p);

	// remove all assets from the Trader
	void clear();

	// print information about the contents of the Trader
	void print();

};

