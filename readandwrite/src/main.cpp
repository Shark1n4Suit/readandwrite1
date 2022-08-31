#include <iostream>
#include <fstream>
#include <string>


namespace Lib
{
	//template print function
	template < typename T >
	void print(T t)
	{
		std::cout << t << "\n";
	}
	
	//writes to text file
	void WriteToFile(std::string filePath)
	{
		std::ofstream file(filePath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();
	}
	
	void ReadFromFile()
	{
		std::string fileContent;
		std::ifstream openFile("minfil.txt");
		while (std::getline(openFile, fileContent))
		{
			std::cout << "filecontent: " << fileContent << "\n";
		}
		openFile.close();
	}
}




int main()
{
	Lib::print("hej");
	Lib::WriteToFile("minfil.txt");
	Lib::ReadFromFile();
}