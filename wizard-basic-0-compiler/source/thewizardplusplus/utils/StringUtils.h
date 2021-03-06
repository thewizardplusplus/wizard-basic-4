#ifndef STRINGUTILS_H
#define STRINGUTILS_H

#include "StringSide.h"
#include "StringList.h"

namespace thewizardplusplus {
namespace utils {

class StringUtils {
public:
	static std::string trim(const std::string& string, unsigned int sides =
		StringSide::LEFT | StringSide::RIGHT);
	static StringList split(const std::string& string,
		const std::string& separator, bool keep_empty_parts = true);
	static StringList tokenize(const std::string& string,
		const StringList& separators, bool return_separators = false);
	static bool startWith(const std::string& string, const std::string& prefix);
	static bool endWith(const std::string& string, const std::string& suffix);
};

}
}
#endif
