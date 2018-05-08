
#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <cmath>
#include <time.h>
#include <Windows.h>

#include "lib.h"

int main()
{
	printf("EntropyRandom\n");

	while(1)
	{
		std::string raw = RandomString(8);

		if(raw.length() < 128)
			printf("RAW : %s\n", raw.c_str());

		printf("Entropy : %f\n====\n", entropy(raw));
	}

	getchar();
	return 0;
}
