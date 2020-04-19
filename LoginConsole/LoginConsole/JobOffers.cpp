#include "JobOffers.h"

std::string JobOffers::GetJobOffers()
{
	return jobs;
}

int JobOffers::GetCrewOverview()
{
	return numberOfCrewMembers;
	return crew;
}

std::string JobOffers::GetDestination()
{
	return destination;
}

std::string JobOffers::GetRequirements()
{
	return requirements;
}

std::string JobOffers::GetThreats()
{
	return threatnames;
}

void JobOffers::SetJobOffers(std::string aJobOffer)
{
	jobs = aJobOffer;
}

void JobOffers::SetCrewOverview(int aNumberOfCrewMembers, bool aCrew)
{
	numberOfCrewMembers = aNumberOfCrewMembers;
	crew = aCrew;
}

void JobOffers::SetDestination(std::string aDestination)
{
	destination = aDestination;
}

void JobOffers::SetRequirements(std::string aRequirements)
{
	requirements = aRequirements;
}

void JobOffers::SetThreats(std::string aThreatName, bool aThreat, int aNumberOfThreats)
{
	threatnames = aThreatName;
	threats = aThreat;
	numberOfThreats = aNumberOfThreats;
}
