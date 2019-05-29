#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class File
{
public:
	File(string path);
	File(string path, string data_header);
	string search(string word);
	string search(string word, string column);
	~File();
private:
	string path;
	
protected:
	void ruler();
	void Add(string row); //first create row string then using this func to add string to file
};

class Information 
{
private:
	string data;
public:
	void set_data(string data);
};