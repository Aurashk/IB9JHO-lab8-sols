#pragma once

#include <array> // needed for c++ style arrays (stored on the stack) 
#include <iostream>
#include "Asset.hpp"

class MarketMaker
{
public:

	// MarketMaker holds up to 25 assets
	static const unsigned int MAX_ASSET_CAPACITY = 25;

private:

	// current amount of assets
	unsigned int m_asset_count;

	// assets for the MarketMaker are stored in this array
	std::array< Asset, MAX_ASSET_CAPACITY > m_assets;

public:

	MarketMaker();

	// retreive the total number of assets in the MarketMaker
	unsigned int get_asset_count();

	// add an asset to the MarketMaker
	void add_asset(Asset p);

	// remove all assets from the MarketMaker
	void clear();

	// print information about the contents of the MarketMaker
	void print();
};

