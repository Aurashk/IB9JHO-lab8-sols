#pragma once

#include <string>

class Asset
{
private:
	std::string m_name;

public:
	// Assets made with this constructor are just nameless placeholders
	Asset();

	// Create a new asset initialised with its name
	Asset(std::string name);

	// recover the name of the Asset
	std::string name();
};

