#include "GoToStatement.h"
#include "exceptions/InvalidNumberOfCodeLineParts.h"
#include "ExpressionCompiler.h"
#include "exceptions/InvalidIdentifierFormat.h"
#include "Compiler.h"
#include "ExpressionCompiler.h"
#include "AssemblerModule.h"

using namespace thewizardplusplus::wizard_basic_0;
using namespace thewizardplusplus::wizard_basic_0::exceptions;
using namespace thewizardplusplus::utils;

const std::string GoToStatement::MARK = "go to";

GoToStatement::GoToStatement(Compiler* compiler) :
	StatementCompiler(compiler, MARK)
{}

void GoToStatement::compile(const StringList& code_line_parts) {
	if (code_line_parts.size() != NUMBER_OF_CODE_LINE_PARTS) {
		throw InvalidNumberOfCodeLineParts();
	}

	std::string label = code_line_parts.front();
	if (!ExpressionCompiler::isIdentifier(label)) {
		throw InvalidIdentifierFormat(label);
	}

	getCompiler()->getAssemblerModule()->createJump(label);
}
