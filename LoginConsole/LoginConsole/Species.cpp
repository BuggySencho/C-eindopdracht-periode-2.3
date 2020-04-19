#include "Species.h"

std::string Species::GetSpecies()
{
	return species;
}

std::string Species::GetLanguage()
{
	return language;
}

bool Species::GetAir()
{
	return needAir;
}

std::string Species::GetHomePlanet()
{
	return homePlanet;
}

void Species::SetSpecies(std::string aSpecies)
{
	species = aSpecies;
}

void Species::SetLanguage(std::string aLanguage)
{
	language = aLanguage;
}

void Species::SetAir(bool aNeedAir)
{
	needAir = aNeedAir;
}

void Species::SetHomePlanet(std::string aPlanet)
{
	homePlanet = aPlanet;
}
