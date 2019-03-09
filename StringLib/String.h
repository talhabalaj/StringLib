#include <string>
using namespace std;

class String {
private:
	char* storage;
public:
	// Constructor
	String();
	String(const char*);
	//String(const String&);

	// Destructor
	~String();

	// Getter 
	char* get();

	// Get length
	int length();
	// Overloaded length function 
	int length(const char*);

	// Copy 
	void copy(const char*);
	void copy(const char);

	// Split
	String** split(const char);

	// Cat 
	void cat(const char*);
	void cat(const char);

	// Compare 
	int compare(const char*);

	// uppercase
	void toUppercase();

	// lowercase
	void toLowercase();
};