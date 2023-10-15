/** Code name: myCopier.pp
 *  Code by: Davis Farrow
 *  This program is for CPE 422 Assignment 6 Problem 1
 *  This program opens a text file for reading and another one for writing
 *  it will read the contents line-by-line while writing them to the other file
 *  both file names are provided as command-line arguments.
 *  the text file should be placed in /home/debian for this to work
 *  output text file will also be placed in /home/debian! 
 */

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#define FILE_PATH "/home/debian"

int main(int argc, char* argv[]){
	if(argc!=3){
		cout << endl;
		cout << endl;
		cout << "Usage is name of file to be read and name of file to be written." << endl;
		cout << "e.g. build read.txt write.txt" << endl;
		return 2;	
	}
	string cmd1(argv[1]);
	string cmd2(argv[2]);

	cout << endl;
	cout << endl;
	cout << "Starting the myCopier program" << endl;
	cout << "The current FILE PATH is: " << FILE_PATH << endl;
	cout << "File name passed to read is: " << cmd1 << endl;
	cout << "File name passed to write is: " << cmd2 << endl;
	cout << endl;

	fstream fs1;
	fstream fs2;
	string line;
	string path(FILE_PATH);

	string filename = "/" + cmd1;
	cout << endl;

	cout << "Reading " << cmd1 << " into " << cmd2 << "..." << endl; 
	// the c_str() method retruns a C++ string as a C string
	fs1.open((FILE_PATH+filename).c_str(), fstream::in);
	fs2.open((path+"/"+cmd2).c_str(), std::fstream::out);
	while(getline(fs1,line)) fs2 << line << endl;
	fs1.close();
	fs2.close();

	cout << "Saving " << cmd2 << " to path: " << path << "..." << endl;
	cout << "Finished the myCopier program" << endl;
	
	cout << endl;
	cout << endl;
	return 0;
}


