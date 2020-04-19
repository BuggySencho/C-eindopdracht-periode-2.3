#pragma once
#include <string>

class Species
{
public:
	std::string GetSpecies();
	std::string GetLanguage();
	bool GetAir();
	std::string GetHomePlanet();

	void SetSpecies(std::string aSpecies);
	void SetLanguage(std::string aLanguage);
	void SetAir(bool aNeedAir);
	void SetHomePlanet(std::string aPlanet);

private:
	std::string species;
	std::string homePlanet;
	std::string language;
	bool needAir;
};
