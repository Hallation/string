#pragma once
#include <iostream>
class string
{
public:
	string();
	string(const string& a_str);
	~string();
	
	string(const char* a_cString); //construct from char*
	string(const int a_iInt);	   //construct from integer

	static bool Compare(const string &a_strA, const string &a_strB);
	
	static bool Compare(const string& a_strA, const char* const a_strB);

	char & operator[](int a_iIndex) {
		//todolist
	}

	// Implict conversion to const char*
	operator const char* () const {

	}

	// operator - Assignment
	string& operator=(const string& a_str)
	{
		// IMPLEMENT
	}

	// operator - Assignment from const char *
	void operator=(const char* const a_cString)
	{
		// IMPLEMENT
	}

	// operator - Equality
	bool operator==(const string &a_strA)  const
	{
		// IMPLEMENT
	}

	// operator - Inequality
	bool operator!=(const string &a_strA)  const
	{
		// IMPLEMENT
	}

	// operator - iosteam output of c-string
	friend std::ostream &operator<<(std::ostream &output, const string &a_str)
	{
		// IMPLEMENT
	}
	// operator - iosteam input of c-string
	friend std::istream &operator>>(std::istream  &input, string &a_str)
	{
		// IMPLEMENT
	}

	// Returns the number of characters in the string
	int Length() const;
	// Returns the number of characters in the string
	int Size() const;

	// Adds the a_strA to the end of the string
	void Append(const string &a_strA);
	// Adds the a_strA to the end of the string
	void Append(const char* const a_strA);

	// Adds the a_strA at the beginning of the string
	void Prepend(const string &a_strA);
	// Adds the a_strA at the beginning of the string
	void Prepend(const char* const a_strA);

	// Returns a C Style string build from m_data
	const char* ToCString() const;

	// Copies a lowercase string into a_outStr
	string ToLower() const;

	// Copies a uppercase string into a_outStr
	string ToUpper() const;

	// Returns the index of the beginning of the queried substring.
	// Returns -1 if not found
	// Optional a_iIndex - commence search from this index
	int SubstringIndex(const string& a_strSub, int a_iIndex = 0) const;

	// Returns the index of the beginning of the queried substring.
	// Returns -1 if not found
	// Optional a_iIndex - commence search from this index
	int SubstringIndex(const char* const a_strSub, int a_iIndex = 0) const;

	// Replaces substring in string with argument.
	// Returns true if successfull.
	// Optional b_allOccurences - replaces all matching substrings - CHALLENGE
	bool Replace(const char* const a_strSub, const char* const a_strNew, bool a_bAll = false);

private:
	char* m_data;
	char* m_temp;
	int m_iLength;
};

