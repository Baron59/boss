/*	Better Oblivion Sorting Software
	
	Quick and Dirty Load Order Utility
	(Making C++ look like the scripting language it isn't.)

    Copyright (C) 2009-2010  Random/Random007/jpearce & the BOSS development team
    http://creativecommons.org/licenses/by-nc-nd/3.0/

	$Revision: 2188 $, $Date: 2011-01-20 10:05:16 +0000 (Thu, 20 Jan 2011) $
*/

//Contains the various functions/classes required for varied BOSSlog output formattings,etc.
//Still at the brainstorming stage.
//The idea is to separate the unformatted text from the formatting. Unformatted text is generated in main() and passed through something found
//here to be formatted appropriately.

#ifndef __BOSS_BOSSLOG_H__
#define __BOSS_BOSSLOG_H__

#include <fstream>
#include <string>
#include "Common/Classes.h"
#include "Common/DllDef.h"
#include <boost/format.hpp>

namespace boss {
	using namespace std;

	//Default filter options.
	BOSS_COMMON_EXP extern bool UseDarkColourScheme;
	BOSS_COMMON_EXP extern bool HideVersionNumbers;
	BOSS_COMMON_EXP extern bool HideGhostedLabel;
	BOSS_COMMON_EXP extern bool HideChecksums;
	BOSS_COMMON_EXP extern bool HideMessagelessMods;
	BOSS_COMMON_EXP extern bool HideGhostedMods;
	BOSS_COMMON_EXP extern bool HideCleanMods;
	BOSS_COMMON_EXP extern bool HideRuleWarnings;
	BOSS_COMMON_EXP extern bool HideAllModMessages;
	BOSS_COMMON_EXP extern bool HideNotes;
	BOSS_COMMON_EXP extern bool HideBashTagSuggestions;
	BOSS_COMMON_EXP extern bool HideRequirements;
	BOSS_COMMON_EXP extern bool HideIncompatibilities;
	BOSS_COMMON_EXP extern bool HideDoNotCleanMessages;

	//Default CSS.
	BOSS_COMMON_EXP extern string CSSBody;
	BOSS_COMMON_EXP extern string CSSFilters;
	BOSS_COMMON_EXP extern string CSSFiltersList;
	BOSS_COMMON_EXP extern string CSSTitle;
	BOSS_COMMON_EXP extern string CSSCopyright;
	BOSS_COMMON_EXP extern string CSSSections;
	BOSS_COMMON_EXP extern string CSSSectionTitle;
	BOSS_COMMON_EXP extern string CSSSectionPlusMinus;
	BOSS_COMMON_EXP extern string CSSLastSection;
	BOSS_COMMON_EXP extern string CSSTable;
	BOSS_COMMON_EXP extern string CSSList;
	BOSS_COMMON_EXP extern string CSSListItem;
	BOSS_COMMON_EXP extern string CSSSubList;
	BOSS_COMMON_EXP extern string CSSCheckbox;
	BOSS_COMMON_EXP extern string CSSBlockquote;
	BOSS_COMMON_EXP extern string CSSError;
	BOSS_COMMON_EXP extern string CSSWarning;
	BOSS_COMMON_EXP extern string CSSSuccess;
	BOSS_COMMON_EXP extern string CSSVersion;
	BOSS_COMMON_EXP extern string CSSGhost;
	BOSS_COMMON_EXP extern string CSSCRC;
	BOSS_COMMON_EXP extern string CSSTagPrefix;
	BOSS_COMMON_EXP extern string CSSDirty;
	BOSS_COMMON_EXP extern string CSSQuotedMessage;
	BOSS_COMMON_EXP extern string CSSMod;
	BOSS_COMMON_EXP extern string CSSTag;
	BOSS_COMMON_EXP extern string CSSNote;
	BOSS_COMMON_EXP extern string CSSRequirement;
	BOSS_COMMON_EXP extern string CSSIncompatibility;

	//Prints a given message to the bosslog, using format-safe Output function below.
	void ShowMessage(string& buffer, Message currentMessage);

	//Prints ouptut with formatting according to format.
	BOSS_COMMON_EXP void Output(string text);
	
	//Escapes HTML special characters.
	BOSS_COMMON_EXP string EscapeHTMLSpecial(string text);

	//Prints HTML header.
	BOSS_COMMON_EXP void OutputHeader();

	//Prints HTML footer (ie. </body> and </html> tags).
	BOSS_COMMON_EXP void OutputFooter();

	//Converts an integer to a string using BOOST's Spirit.Karma. Faster than a stringstream conversion.
	BOSS_COMMON_EXP string IntToString(const unsigned int n);

	//Converts an integer to a hex string using BOOST's Spirit.Karma. Faster than a stringstream conversion.
	string IntToHexString(const unsigned int n);

	//Converts a boolean to a string representation (true/false)
	string BoolToString(bool b);

	enum logFormatting {
		DIV_OPEN,
		DIV_CLOSE,
		LINE_BREAK,
		LINK_OPEN_ADDRESS,
		LINK_CLOSE_ADDRESS,
		LINK_CLOSE,
		SYMBOL_COPYRIGHT,
		SYMBOL_AMPERSAND,
		SYMBOL_PLUS,
		SYMBOL_MINUS,
		TABLE_ROW,
		TABLE_OPEN,
		TABLE_CLOSE,
		JAVASCRIPT_TOGGLE_SECTION_DISPLAY,
		ID_END,
		ID_RECOGNISED,
		ID_USERLIST_MESSAGES,
		LIST_CLOSE,
	};
	/*
	class Output {
	public:
		void Open(fs::path file, string format, bool shouldEscapeHTMLSpecial);		//Opens the output stream using the given file, and prints the bosslog header to it.
		void Close();					//Prints the bosslog footer to the output stream then closes it.
		void SetFormat(string format);	//Sets the formatting type of the output.
		void SetHTMLSpecialEscape(bool shouldEscape);	//Sets whether or not to escape the HTML special characters from non-formatting input.
	
		Output& operator << (const string s);
		Output& operator << (const char * s);
		Output& operator << (const char c);
		Output& operator << (logFormatting l);
		Output& operator << (unsigned int i);
		Output& operator << (bool b);
		Output& operator << (fs::path p);
		Output& operator << (Message m);
	private:
		ofstream outStream;
		string outFormat;			//The formatting type of the output.
		bool escapeHTMLSpecialChars;	//Should special characters be escaped from non-formatting input?
	
		string EscapeHTMLSpecial(string text);	//Performs the HTML escaping.
		string EscapeHTMLSpecial(char c);
	};*/
}
#endif