#include "Database.h"

std::vector<Person> Database::GetPerson()
{
	return persons;
}

void Database::SetPerson(std::vector<Person> aPerson)
{
	persons = aPerson;
}
