#include "notsed.hpp"

bool	fExists(const std::string& name)
{
	struct stat	buffer;

	return (stat(name.c_str(), &buffer) == 0); 
}

int	replaceIf(std::string filename, std::string s1, std::string s2)
{
	std::ofstream	wFile((filename + ".replace").c_str());
	std::ifstream	rFile(filename.c_str());
	std::string		line;

	if (!wFile.is_open() || !rFile.is_open())
		return (exit_(3));
	while ((std::getline(rFile, line)))
	{
		if (!rFile.eof())
			line += '\n';
		unsigned long len = line.size();
		for (unsigned long i = 0; i < len; i++)
		{
			unsigned long j = 0;
			while (i + j < len && line[i + j] == s1[j])
				j++;
			if (j == s1.size())
			{
				wFile << s2;
				i += s1.size() - 1;
				continue ;
			}
			wFile << line[i];
		}
	}
	return (exit_(0));
}

int exit_(int status)
{
	switch (status)
	{
		case 1:
			std::cout << "Incorrect number of arguments" << std::endl;
			break ;
		case 2:
			std::cout << "File doesn't exist" << std::endl;
			break ;
		case 3:
			std::cout << "Error opening the file" << std::endl;
			break ;
	}
	return (status);
}
