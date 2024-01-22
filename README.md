# IB9JHO Lab 8: Class Structures

This repository contains 4 class definitions:
- Market
- Trader
- MarketMaker
- Asset
Each of the classes have a .hpp file which declares its member data and functions, 
and a .cpp file which defines the member functions. In the lab you will only need to modify the body 
of the member functions in the .cpp files.
- The Market class stores Trader and MarketMaker objects in static arrays. The size of each 
array is defined by the corresponding maximum capacity variables (up to 5 market makers
and 10 traders) in the Market.hpp file. The current number of market makers and traders in 
each array are stored as unsigned integers.
- The Asset class contains an asset name m_name which it is constructed with.
For instance, writing:
Asset(“Property”) 
creates an Asset object with:
m_name = “Property”.
- The Trader class stores Asset objects in an array, up to a maximum capacity of 15 as defined 
in the Trader.hpp file. 
- The MarketMaker class stores Asset objects in an array, up to a maximum capacity of 25 as 
defined in the MarketMaker.hpp file.

# Testing your solutions:

To help your understanding of what is required, check the testing code before you run it and look at the expected output.
For example, for exercise 1, check tests/test_ex1.cpp and look at the expected output in tests/IO/ex1_output.txt.
After completing each exercise, run the corresponding test to verify your solution.

# Exercise 1:
Implement the member functions to count the number of assets held by a trader, a market maker,
and the whole market. The member functions to implement are Trader::get_asset_count()
(Trader.cpp), MarketMaker::get_asset_count() (MarketMaker.cpp) and Market::get_asset_count()
(Market.cpp).
Note: The function Market::get_asset_count() is partially completed, but it only counts the assets in
one of the market-actor arrays, edit it so that it also counts the assets from the other array.
# Exercise 2:
Implement the methods Trader::clear(), MarketMaker::clear(), and Market::clear(). These should 
remove all assets from the trader, market maker, and entire market respectively.
1. For traders and market makers, the functions only require one line of code. You don’t need 
to do anything to the array which stores assets. You just need to modify the appropriate 
variable to indicate there are no assets in the class.
2. For MarketMaker::clear(), it is sufficient to call the clear function for each trader and each 
market maker in the market.
# Exercise 3:
The functions Trader::add_asset(), MarketMaker::add_asset(), Market::add_trader() and
Market::add_market_maker() are used to populate the market actors with assets and the market
with market actors. These functions are currently unsafe because they do not check if the maximum 
capacity of the respective arrays have been reached. Modify the four functions so that if the
maximum capacity of assets is reached, a warning message is printed instead of trying to add a new 
market actor/asset.
# Exercise 4:
Implement methods Trader::print(), MarketMaker::print(), and Market::print(). These functions
should print out the names of the assets contained in the trader, market maker and the whole
market in a readable format. To help you, look at the expected output for test 4, which prints 
everything in the example market. You should use tab characters ‘\t’ to make the output easier to
read.
1. For traders and market makers, loop through all the assets and print out the names.
2. For the market, call the print functions for all the stored traders, and then the market 
makers.
# Exercise 5:
Modify the functions Trader::print() and MarketMaker::print so that when the market actors have no 
assets, “Empty” will be printed out.

# Submission
Once you have tested your solutions, submit your work by pushing your changes to the repository.
You can use the commit message "Submit assignment" or something similar.