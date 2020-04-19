#pragma once
#include <string>

class Person
{
public:
	Person(std::string aName, int aAge);
	~Person();
	std::string GetJob();
	int GetBounty();
	int GetIncome();

	void SetBounty(int aBounty);
	void SetIncome(int aIncome);
	void SetJob(std::string aJob);

private:
	std::string name;
	int age;
	std::string job;
	int bounty;
	int income;

};
