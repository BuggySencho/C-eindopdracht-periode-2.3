#pragma once
#include <vector>
#include "Person.h"


class Database
{
public:
	std::vector<Person> GetPerson();

	void SetPerson(std::vector<Person> aPerson);

private:
	std::vector<Person> persons;
};
