#include "hpp.hpp"
#define YYERR "\n\n"<<yylineno<<":"<<msg<<"["<<yytext<<"]\n\n"
void yyerror(string msg) { cout<<YYERR; cerr<<YYERR; exit(-1); }
int main(int argc, char *argv[]) {
	cout << "<html>\n<script>\nconsole.log('"<<argv[0]<<"');\n";
	yyparse();
	cout << "</script>\n</html>\n";
	return 0;
}

