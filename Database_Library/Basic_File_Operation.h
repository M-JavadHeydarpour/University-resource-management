#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class File
{
public:
	File(string path);
	File(string path, string data_header);
	string search(string word);
	string search(string word, string column);
	string search(string word, int column);
	~File();
	string merge(Information  *data);
	
protected:
	void ruler();
	void Add(string row); //first create row string then using this func to add string to file
	int count_columns(string data_header);

private:
	string path;
	int columns;
};

class Information
{
private:
	string data;
public:
	void set_data(string data);
	string get_data();
};