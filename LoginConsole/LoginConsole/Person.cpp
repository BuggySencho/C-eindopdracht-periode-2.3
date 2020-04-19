#include "Person.h"
#include "Species.h"

Person::Person(std::string aName, int aAge)
{
	name = aName;
	age = aAge;
}

Person::~Person()
{

}

std::string Person::GetJob()
{
	return job;
}

int Person::GetBounty()
{
	return bounty;
}

int Person::GetIncome()
{
	return income;
}

void Person::SetBounty(int aBounty)
{
	bounty = aBounty;
}

void Person::SetIncome(int aIncome)
{
	income = aIncome;
}

void Person::SetJob(std::string aJob)
{
	job = aJob;
}
