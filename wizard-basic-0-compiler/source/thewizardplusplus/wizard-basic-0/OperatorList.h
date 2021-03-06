#ifndef OPERATORLIST_H
#define OPERATORLIST_H

#include "Operator.h"
#include "../utils/StringList.h"

namespace thewizardplusplus {
namespace wizard_basic_0 {

class OperatorList : public std::list<Operator> {
public:
	Operator getOperatorByToken(const std::string& token) const;
};

}
}
#endif
