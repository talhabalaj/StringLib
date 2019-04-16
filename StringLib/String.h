#include <string>
using namespace std;

class String {
private:
	char* storage;
public:
	// Constructor
	String();
	String(const char*);
	String(const String&);

	// Destructor
	~String();

	// Getter 
	char* get() const;

	// Get length
	int length() const;
	// Overloaded length function 
	static int length(const char*);
	static int length(const String&);

	// Copy 
	String copy(const char*);
	String copy(const String&);

	// Split
	String** split(const char);

	// Cat 
	String cat(const char*);
	String cat(const char);
	String cat(const String&);

	// Compare 
	int compare(const char*);
	int compare(const String&);

	// uppercase
	String toUppercase();

	// lowercase
	String toLowercase();

	// Operator Overloading
	friend String operator+(const String&, const String&);
	friend ostream& operator<<(ostream&, const String&);
	friend istream& operator>>(istream&, String&);
};