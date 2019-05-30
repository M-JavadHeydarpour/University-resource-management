#include "Basic_File_Operation.h"

/*ifstream: Stream class to read from files
ofstream : Stream class to write to files*/

File::~File()
{

}

File::File(string path)
{
	this->path = path;

	ifstream file(this->path);
	if (!file)
		cout << "Oops,Can't find file with this path.";
	string data_header;
	getline(file, data_header);
	file.close();

	this->columns = count_columns(data_header);
}

File::File(string path, string data_header)
{
	this->path = path;

	ofstream file;
	file.open(this->path);
	//if you want to change tab or space to colon or semicolon Here is the place to implement this idea.
	file << data_header << endl;
	file.close();
	this->columns = count_columns(data_header);
}

string File::search(string word)
{
	return string();
}

string File::search(string word, string column)
{
	return string();
}

string File::search(string word, int column)
{
	return string();
}

void File::ruler()
{
	ifstream file;
	file.open(this->path);
	int line_count = -1; //becouse header have't counted
	string line;
	while (getline(file, line))line_count++;
	file.close();

	ofstream file_w;
	file_w.open(this->path);
	file_w << to_string(line_count) << "|";
}

void File::Add(string row)
{
	ruler();
	ofstream file;
	file.open(path);
	file << row << endl;
}

int File::count_columns(string data_header)
{
	ifstream file;
	file.open(path);
	int columns = 0;
	for (int i = 0; data_header[i]; i++)
		if (data_header[i] == ';')
			columns++;
	return columns;
}

string File::merge(Information  *data)
{
	string row = "";
	for (int i = 0; i < columns; i++)
	{
		row += data[i].get_data();
		row += ";";
	}
	return row;
}

void Information::set_data(string data)
{
	this->data = data;
}

string Information::get_data()
{
	return data;
}
