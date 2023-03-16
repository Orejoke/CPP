#include <iostream>
#include <string>
using namespace std;

class outOfBoundException
{
public:
	void error() { cout << "Index Out of bound" << endl; }
};


class MyException
{
public:
	MyException(string error): m_error(error){}

public:
	void error() 
	{ 
		/*if( 0 != m_logLevel)*/
		cout << m_error << endl; 
	}

private:
	string	m_error;
	int		m_logLevel = 1;
};

class String
{
public:
    String(const char* str="");
    String(const String& str);
    ~String() { delete[] _p; }

public:
	String& operator = (const String& str);
    String& operator += (const String& str);
    String operator + (const String& str) const;

    const char& operator[] (int index) const;
    char& operator[] (int index);

    bool operator == (const String& str) const;
	bool operator >= (const String& str) const;

    bool operator <= (const String& str) const;
    bool operator > (const String& str) const;
    bool operator < (const String& str) const;
    bool operator != (const String& str) const;
    
    int len() const { return _len; }
    
    friend ostream& operator << (ostream& out, const String& str);

private:
    char*	_p;
    int		_len;
};

ostream& operator << (ostream& out, const String& str);
istream& operator >> (istream& in, String& str);