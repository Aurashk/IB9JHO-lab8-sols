#include "Market.hpp"

Market::Market()
	:
	m_market_maker_count(0),
	m_trader_count(0),

	// it's good practice to default-initialise all array members 
	// in an array of object. The code below will call the empty constructor
	// to populate each array element.
	// e.g for 0 <= i < length(m_market_makers)
	// m_market_makers[i] = MarketMaker();
	m_market_makers({}),
	m_traders({})
{}

unsigned int Market::get_asset_count()
{
	unsigned int count = 0;

	for (unsigned int i = 0; i < m_market_maker_count; ++i)
		count += m_market_makers[i].get_asset_count();

	for (unsigned int i = 0; i < m_trader_count; ++i)
		count += m_traders[i].get_asset_count();

	// exercise 1

	return count;
}

void Market::add_market_maker(MarketMaker mm)
{
	// exercise 3
	if (m_market_maker_count >= MAX_MARKETMAKER_CAPACITY)
	{
		std::cout << "cannot add a new market maker to the market because it would exceed maximum capacity" << std::endl;
		return;
	}

	m_market_makers[m_market_maker_count] = mm;
	++m_market_maker_count;
}

void Market::add_trader(Trader t)
{
	// exercise 3
	if (m_trader_count >= MAX_TRADER_CAPACITY)
	{
		std::cout << "cannot add a new trader to the market because it would exceed maximum capacity" << std::endl;
		return;
	}

	m_traders[m_trader_count] = t;
	++m_trader_count;
}

void Market::clear()
{
	// exercise 2
	for (unsigned int i = 0; i < m_market_maker_count; ++i)
		m_market_makers[i].clear();

	for (unsigned int i = 0; i < m_trader_count; ++i)
		m_traders[i].clear();
}

void Market::print()
{
	// exercise 4
	const unsigned int indent_level = 1;

	std::cout << "===================== Traders =====================" << std::endl;

	for (unsigned int i = 0; i < m_trader_count; ++i)
	{
		for (unsigned int j = 0; j < indent_level; ++j)
			std::cout << "\t";

		std::cout << "Trader " << i << " contains:" << std::endl;

		// print off all the assets for trader i
		m_traders[i].print();
	}

	std::cout << "===================== Market Makers ==========================" << std::endl;

	for (unsigned int i = 0; i < m_market_maker_count; ++i)
	{
		for (unsigned int j = 0; j < indent_level; ++j)
			std::cout << "\t";

		std::cout << "Market maker " << i << " contains:" << std::endl;

		// print off all the assets for market maker i
		m_market_makers[i].print();
	}

	std::cout << std::endl;
}
