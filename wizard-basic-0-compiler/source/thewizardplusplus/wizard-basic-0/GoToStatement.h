#ifndef GOTOSTATEMENT_H
#define GOTOSTATEMENT_H

#include "StatementCompiler.h"

namespace thewizardplusplus {
namespace wizard_basic_0 {

class GoToStatement : public StatementCompiler {
public:
	static const std::string  MARK;
	static const unsigned int NUMBER_OF_CODE_LINE_PARTS = 1;

	GoToStatement(Compiler* compiler);
	virtual void compile(const utils::StringList& code_line_parts);
};

}
}
#endif
