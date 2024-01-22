#include "MarketMaker.hpp"
#include "Trader.hpp"
#include "Market.hpp"
#include "Asset.hpp"

// fill market with assets and market actors
void populate_market_for_tests(Market& a)
{
	// our market will contain 2 MarketMakers and 1 Trader
	MarketMaker mm1, mm2;
	Trader t1;

	// populate MarketMaker 1
	mm1.add_asset(Asset("AAPL"));
	mm1.add_asset(Asset("MSFT"));
	mm1.add_asset(Asset("AMZN"));

	// populate MarketMaker 2
	mm2.add_asset(Asset("TSLA"));
	mm2.add_asset(Asset("GOOGL"));

	// populate Trader 1
	t1.add_asset(Asset("FB"));
	t1.add_asset(Asset("NVDA"));
	t1.add_asset(Asset("BRK.B"));
	t1.add_asset(Asset("JPM"));
	t1.add_asset(Asset("JNJ"));

	a.add_market_maker(mm1);
	a.add_market_maker(mm2);
	a.add_trader(t1);
}


int main()
{
	Market a;
	MarketMaker mm1;

	// This should trigger an error message as it exceeds the max capacity of the MarketMaker
	for (unsigned int i = 0; i <= MarketMaker::MAX_ASSET_CAPACITY; ++i)
		mm1.add_asset(Asset("test"));

	// This should trigger an error message as it exceeds the max capacity of the market
	// since we are copying mm1, we can add it as many times as we want
	for (unsigned int i = 0; i <= Market::MAX_MARKETMAKER_CAPACITY; ++i)
		a.add_market_maker(mm1);
}
