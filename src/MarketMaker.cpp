#include "MarketMaker.hpp"

MarketMaker::MarketMaker()
	:
	m_asset_count(0),
	m_assets({})
{}

unsigned int MarketMaker::get_asset_count()
{
	return m_asset_count; // exercise 1
}

void MarketMaker::add_asset(Asset p)
{
	// exercise 3
	if (m_asset_count >= MAX_ASSET_CAPACITY)
	{
		std::cout << "cannot add a another asset to the market maker because it would exceed maximum capacity" << std::endl;
		return;
	}

	m_assets[m_asset_count] = p;
	++m_asset_count;
}

void MarketMaker::clear()
{
	m_asset_count = 0;
	// exercise 2
}

void MarketMaker::print()
{
	const unsigned int indent_level = 2;

	// exercise 5

	if (m_asset_count == 0)
	{
		for (unsigned int j = 0; j < indent_level; ++j)
			std::cout << "\t";
		std::cout << "Empty" << std::endl;
		return;
	}

	// exercise 4

	for (unsigned int i = 0; i < m_asset_count; ++i)
	{
		for (unsigned int j = 0; j < indent_level; ++j)
			std::cout << "\t";

		std::cout << "Asset " << i << ": " << m_assets[i].name();

		std::cout << std::endl;
	}
}
