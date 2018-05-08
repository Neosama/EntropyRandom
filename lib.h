
double entropy(std::string& st)
{
	std::vector<char> stvec(st.begin(), st.end());
	std::set<char> alphabet(stvec.begin(), stvec.end());
	std::vector<double> freqs;
	for (std::set<char>::iterator c = alphabet.begin(); c != alphabet.end(); ++c) {
		int ctr = 0;
		for (std::vector<char>::iterator s = stvec.begin(); s != stvec.end(); ++s) {
			if (*s == *c) {
				++ctr;
			}
		}
		freqs.push_back((double)ctr / (double)stvec.size());
	}
	double ent = 0;
	double ln2 = logl(2);
	for (std::vector<double>::iterator f = freqs.begin(); f != freqs.end(); ++f) {
		ent += *f * log(*f)/ln2;
	}
	ent = -ent;
	return ent;
}

std::string RandomString(int len)
{
	srand(GetTickCount());

	Sleep(1);

	std::string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz&й(-и_за,;:!щ*$^?./ІА";
	std::string newstr;
	int pos;
	while(newstr.size() != len)
	{
		pos = ((rand() % (str.size() - 1)));
		newstr += str.substr(pos,1);
	}

	return newstr;
}
