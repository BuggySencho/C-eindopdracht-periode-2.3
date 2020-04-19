#pragma once
#include <string>
#include <list>

class JobOffers
{
public:
	std::string GetJobOffers();
	int GetCrewOverview();
	std::string GetDestination();
	std::string GetRequirements();
	std::string GetThreats();

	void SetJobOffers(std::string aJobOffer);
	void SetCrewOverview(int aNumberOfCrewMembers, bool aCrew);
	void SetDestination(std::string aDestination);
	void SetRequirements(std::string aRequirements);
	void SetThreats(std::string aThreatName, bool aThreat, int aNumberOfThreats);

private:
	std::string jobs;
	// std::string jobs[4] = { "Bounty Hunting", "Mining", "Exploration", "Pirating" };
	std::string destination;
	std::string requirements;
	std::string threatnames;
	int numberOfCrewMembers;
	int numberOfThreats;
	bool threats;
	bool crew;
	
};
