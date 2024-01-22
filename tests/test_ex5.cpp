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
	populate_market_for_tests(a);
	a.clear();
	a.print();
}
