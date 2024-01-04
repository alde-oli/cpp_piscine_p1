#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "usage: ./SearchAndReplace <filename> <toSearch> <toReplace>" << std::endl;
		return (1);
	}

	std::string inputFile = argv[1];
	std::string outputFile = inputFile + ".replace";
	std::ifstream infile(inputFile.c_str());
	std::ofstream outfile(outputFile.c_str());

	if (!infile.is_open() || !outfile.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		if (infile.is_open())
			infile.close();
		if (outfile.is_open())
			outfile.close();
		return (1);
	}

	std::string line;
	std::string toSearch = argv[2];
	std::string toReplace = argv[3];

	while (std::getline(infile, line))
	{
		size_t pos = 0;
		if (toSearch.length() != 0)
		{
			while ((pos = line.find(toSearch, pos)) != std::string::npos)
			{
				line.replace(pos, toSearch.length(), toReplace);
				pos += toReplace.length();
			}
		}
		outfile << line << std::endl;
	}

	infile.close();
	outfile.close();

	return (0);
}