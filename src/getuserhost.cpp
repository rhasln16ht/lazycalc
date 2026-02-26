#include "getuserhost.hpp"
#include <unistd.h>
#include <pwd.h>

std::string getUsername() {
	struct passwd *pw = getpwuid(getuid());
	return pw ? pw->pw_name : "unknown";
}

std::string getHostname() {
	char hostname[256];
	gethostname(hostname, sizeof(hostname));
	return hostname;
}
