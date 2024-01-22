#include "Asset.hpp"

Asset::Asset()
	:
	// This constructor is just a call to the other constructor with the string argument "Nameless Asset"
	Asset("Nameless Asset")
{}

Asset::Asset(std::string name)
	:
	m_name(name)
{}

std::string Asset::name()
{
	return m_name;
}
