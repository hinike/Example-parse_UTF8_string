#pragma once

#include "ofMain.h"

/*
 

 to read
 http://stackoverflow.com/questions/775412/how-does-a-file-with-chinese-characters-know-how-many-bytes-to-use-per-character
 

 tryed to implement this.. but no luck
 stringContainsEmoji
 https://gist.github.com/cihancimen/4146056
 
 ascii table
 http://www.asciitable.com

 emoji tables
 http://apps.timwhitlock.info/emoji/tables/unicode
 
 */



class ofApp : public ofBaseApp{
	
public:
	void setup();

	string parseString(string s);
	bool stringContainsEmoji(string s);
	void printStringInfo(string s);
	void printFirsCharInfo(string s);
	
	unsigned int ofHexToUnsignedInt(const string& intHexString);
	
	vector <string> str;
	
};
