#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	str.clear();
	str.reserve(10);
	
	str.push_back("a");				//length 1
	str.push_back("aa");			//length 4
	//	str.push_back("ñ");				//length 2
	//	str.push_back("ش");				//length 2
	str.push_back("音");				//length 3
	str.push_back("😍");			//length 4
	str.push_back("a😍");			//length 5
	
/*
	str.push_back("初音ミク初音ミク初音ミク初音ミク初音ミク初  fjhlksadjhflkjhdfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasdfsadfasldkjf hasldkjfhdsfalkjhasdlk fhasldkfjhl ksadjhflkjh dfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasdf音ミク初音ミク初音ミク初音ミク初音ミク初音ミク初音ミクññññ ñññññññññññ ñññññññññññ ñññññññññññ ñññññññññññ ñññññññññññ初音ミク初音ミク初音ミク初音ミク初音ミク");
	str.push_back("初音ミク初音ミク初音ミク初音ミク初音ミク初音ミク初音ミク初音ミク初音ミク初音ミク初音ミク初音ミク初音ミク初音ミク初音ミク初音ミク初音ミク");
	str.push_back("lksjadlkjsdafl ksldkf lsdkfj laksdj flkasjd flkjas dlfkjas ldkfj asldkfj laskdjf lkasdjf ");
	str.push_back("asdfasdfasdfasdfasdfasdfasdfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjh");
	str.push_back("asdfa初音ミク初音ミク初音ミクññññ ñññflkjhdfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasd+ ++ + fsadA	BCDEFU1F60x	😀	😁	😂	😃	😄	😅	😆	😇	😈	😉	😊	😋	😌	😍	😎	😏 U1F61x	😐	😑	😒	😓	😔	😕	😖	😗	😘	😙	😚	😛fasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasdfs☓	☔	☕	☖	☗	☘	☙	☚	☛	☜	☝	☞	☟ U+262x	☠	☡	☢	☣	☤	☥	☦	☧	☨	☩	☪	☫	☬	☭	☮	U+263x	☰	☱	☲	☳	☴	☵	☶	☷	☸	☹	☺	☻	☼	☽	☾	☿ U+264x	♀	♁	♂	♃	♄	♅	♆	♇	♈	♉	♊	♋	♌	♍	♎					  U+265x	♐	♑	♒	♓	♔	♕	♖	♗	♘	♙	♚	♛	♜	♝	♞	♟U+266x	♠	♡	♢	♣	♤	♥	♦	♧	♨	♩	♪	♫	♬	♭	♮	♯U+267x	♰	♱	♲	♳	♴	♵	♶	♷	♸	♹	♺	♻	♼	♽	♾	♿U+268x	⚀	⚁	⚂	⚃	⚄	⚅	⚆	⚇	⚈	⚉	adfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjhdfasdfsadfasldkୠଌୡଏ غظضذخثتشرهدج αβγδεζηθικλμνξοπρσςτυφχ จชซฌฎฏฐฑjfhasldkjfhd🚃🚄	🚅	🚆	🚇	🚈	🚉	🚊	🚋	🚌	🚍	🚎	🚏				  U+1F69x	🚐	🚑	🚒	🚓	🚔	🚕	🚖	🚗	🚘	🚙	🚚	🚛	🚜	🚝	🚞	🚟				  U+1F6Ax	🚠	🚡	🚢	🚣	🚤	🚥	🚦	🚧	🚨	🚩	🚪	🚫	🚬	🚭	🚮	🚯				  U+1F6Bx	🚰	🚱	🚲	🚳	🚴	🚵	🚶jhdfasdfsadfasldkjfhasldkjfhdsfalkjhasdlkfhasldkfjhlksadjhflkjh");
	str.push_back("ñññññññññññ ñññññññññññ ñññññññññññ ñññññññññññ ñññññññññññ ñññññññññññ ñññññññññññ ñññññññññññ ñññññññññññ");
	str.push_back("ññ କୈଊଋୠଌୡଏ غظضذخثتشرهدج αβγδεζηθικλμνξοπρσςτυφχ จชซฌฎฏฐฑฒดตทธศษ...   ");
	str.push_back("ñ 初音ミク. Lor");
*/
		
	for(int j=0; j<str.size();j++){
		string s;
		s= str[j];
		string parsed;

		printFirsCharInfo(s);
		printStringInfo(s);
		parsed = parseString(s);
		cout << "PARSED " << parsed << endl;
	}
}

//--------------------------------------------------------------
string ofApp::parseString(string s){
	
	string returnString = "";
	int l = s.length();
	int i;
	
	// for each byte
	for (i = 0; i < l; ++i) {
		char mychar = s[i];
		string binary = ofToBinary(mychar);
		binary =  binary.substr(0,4);
		if (binary == "1111"){
			i+=3;		//jump to next char
			cout << "Found Emoji, killing... " << endl;
		}else{
			returnString += mychar;
		}
	}
	return returnString;
}

//--------------------------------------------------------------
void ofApp::printStringInfo(string s){
	
	cout << "******************************** Parsing the string" << endl;
	cout << "char " << s << " length " << s.length() << " size " << sizeof(s) << endl;
	cout << "********************************" << endl;
	cout << "ascii				" << (int) s.c_str() << endl;
	cout << "UTF-8OctalBytes		" << s << endl;
	cout << " ofToHex				" << ofToHex(s) << endl;
	cout << " ofToBinary			" << ofToBinary(s) << endl;
	cout << "********************************" << endl;
	
	int l = s.length();
	int i;
	
	// print for each byte
	for (i = 0; i < l; ++i) {
		char mychar = s[i];

		cout << "ascii				" << (int) mychar << endl;
		cout << "UTF-8OctalBytes		" << mychar << endl;
		cout << " ofToHex				" << ofToHex(mychar) << endl;
		cout << " ofToBinary			" << ofToBinary(mychar) << endl;
		cout << endl;

		string binary = ofToBinary(mychar);
		binary =  binary.substr(0,4);
		cout << " binary			" << binary << endl;
	}
	
	cout << "******************************** End Parsing the string" << endl;
}

//--------------------------------------------------------------
void ofApp::printFirsCharInfo(string s){
	
	cout << "******************************** Parsing one char" << endl;
	char mychar = ofToChar(s);
	cout << " Char			= " << mychar << endl;
	cout << " sizeof			= " << sizeof(mychar) << endl;
	cout << " ofToHex			" << ofToHex(mychar) << endl;
	cout << " ofToBinary		" << ofToBinary(mychar) << endl;
	cout << " int				" <<(int) mychar << endl;
	cout << "--------------------------------" << endl;
	string mystr = s;
	cout << " Str				= " << mystr << endl;
	cout << " length			= " << mystr.length() << endl;
	cout << " sizeof			= " << sizeof(mystr) << endl;
	cout << " ofToHex			" << ofToHex(mystr) << endl;
	cout << " ofToBinary		" << ofToBinary(mystr) << endl;
	string hex = ofToHex(mystr);
	
	cout << " ofHexToInt		" << 	std::setprecision(12) << ofHexToUnsignedInt(hex) << endl;
	cout << endl;
	
	
	if (ofHexToUnsignedInt(hex) == 0xf09f988d ){	// 0x61=a in ASCII	(hex)
		cout << "= 0xf09f988d (hex)		EMOJI FoUND" << endl;
	}
	
	if (mychar == 97 ){		// 61=a in ASCII	(dec)
		cout << "\"a\" = 97 in ASCII (dec)" << endl;
	}
	
	if (mychar == 0x61 ){		// 0x61=a in ASCII	(hex)
		cout << "\"a\" = 61 in ASCII (hex)" << endl;
	}
	cout << "******************************** End Parsing one char" << endl;
}

//----------------------------------------
unsigned int ofApp::ofHexToUnsignedInt(const string& intHexString) {
	unsigned int x = 0;
	istringstream cur(intHexString);
	cur >> hex >> x;
	return x;
}





//--------------------------------------------------------------
// not working
bool ofApp::stringContainsEmoji(string s){
	
	bool returnValue = false;
	
	int l = sizeof(s);
	int i;
	/*
	 
	 // print hex value for each byte
	 for (i = 0; i < l; ++i) {
	 char mychar = s[i];
	 
	 string hss= "0x"+ofToHex(mychar);
	 cout <<"ofToHex =" << hss << endl;
	 
	 char hs= ofHexToChar(hss);
	 cout <<"ofHexToChar =" << hs << endl;
	 
	 
	 cout << "ascii				" << (int) mychar << endl;
	 cout << "UTF-8OctalBytes		" << mychar << endl;
	 cout << " ofToHex				" << ofToHex(mychar) << endl;
	 cout << " ofToBinary			" << ofToBinary(mychar) << endl;
	 cout << endl;
	 }
	 
	 
	 // surrogate pair
	 if (0xd800 <= hs && hs <= 0xdbff) {
	 if (s.length() > 1) {
	 const char ls = s[1];
	 const int uc = ((hs - 0xd800) * 0x400) + (ls - 0xdc00) + 0x10000;
	 if (0x1d000 <= uc && uc <= 0x1f77f) {
	 returnValue = true;
	 }
	 }
	 } else if (s.length() > 1) {
	 const char ls = s[1];
	 if (ls == 0x20e3) {
	 returnValue = true;
	 }
	 
	 } else {
	 // non surrogate
	 if (0x2100 <= hs && hs <= 0x27ff) {
	 returnValue = true;
	 } else if (0x2B05 <= hs && hs <= 0x2b07) {
	 returnValue = true;
	 } else if (0x2934 <= hs && hs <= 0x2935) {
	 returnValue = true;
	 } else if (0x3297 <= hs && hs <= 0x3299) {
	 returnValue = true;
	 } else if (hs == 0xa9 || hs == 0xae || hs == 0x303d || hs == 0x3030 || hs == 0x2b55 || hs == 0x2b1c || hs == 0x2b1b || hs == 0x2b50) {
	 returnValue = true;
	 }
	 }
	 
	 */
	
	return returnValue;
}




