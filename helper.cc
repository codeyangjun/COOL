#include "helper.h"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;
namespace cool_helper {
std::string TokenToString(int tok) {
  switch (tok) {
  case 0:            return("EOF");        break;
  case (CLASS):      return("CLASS");      break;
  case (ELSE):       return("ELSE");       break;
  case (FI):         return("FI");         break;
  case (IF):         return("IF");         break;
  case (IN):         return("IN");         break;
  case (INHERITS):   return("INHERITS");   break;
  case (LET):        return("LET");        break;
  case (LOOP):       return("LOOP");       break;
  case (POOL):       return("POOL");       break;
  case (THEN):       return("THEN");       break;
  case (WHILE):      return("WHILE");      break;
  case (ASSIGN):     return("ASSIGN");     break;
  case (CASE):       return("CASE");       break;
  case (ESAC):       return("ESAC");       break;
  case (OF):         return("OF");         break;
  case (DARROW):     return("DARROW");     break;
  case (NEW):        return("NEW");        break;
  case (STR_CONST):  return("STR_CONST");  break;
  case (INT_CONST):  return("INT_CONST");  break;
  case (BOOL_CONST): return("BOOL_CONST"); break;
  case (TYPEID):     return("TYPEID");     break;
  case (OBJECTID):   return("OBJECTID");   break;
  case (ERROR):      return("ERROR");      break;
  case (LE):         return("LE");         break;
  case (NOT):        return("NOT");        break;
  case (ISVOID):     return("ISVOID");     break;
  case '+': return("'+'"); break;
  case '/': return("'/'"); break;
  case '-': return("'-'"); break;
  case '*': return("'*'"); break;
  case '=': return("'='"); break;
  case '<': return("'<'"); break;
  case '.': return("'.'"); break;
  case '~': return("'~'"); break;
  case ',': return("','"); break;
  case ';': return("';'"); break;
  case ':': return("':'"); break;
  case '(': return("'('"); break;
  case ')': return("')'"); break;
  case '@': return("'@'"); break;
  case '{': return("'{'"); break;
  case '}': return("'}'"); break;
  default:  return("<Invalid Token>");
  }
}

void
DumpCoolToken(std::ostream& out, int lineno, int token, YYSTYPE yylval) {
  out << "#" << lineno << " " << TokenToString(token);
  switch (token) {
    case (STR_CONST):
      out << " \"" << ToEscapedString(yylval.symbol->GetString())
          << "\"" << endl;
      break;

    case (INT_CONST):
      out << " " << yylval.symbol->GetString() << endl;
      break;
    
    case (BOOL_CONST):
      out << " " << (yylval.boolean ? "true" : "false") << endl;
      break;

    case (TYPEID):
    case (OBJECTID):
      out << " " << yylval.symbol->GetString() << endl;
      break;

    case (ERROR):
      if (yylval.error_msg[0] == 0) {
        out << " \"\\000\"" << endl;
      } else {
        out << " \""
            << ToEscapedString(yylval.error_msg)
            << " \"" << endl;
      }
      break;
      
    default:
      out << endl;
  }
}

std::string ToEscapedString(const std::string& str) {
  ostringstream oss;
  for (const auto& c : str) {
    switch (c) {
      case '\\' : oss << "\\\\"; break;
      case '\"' : oss << "\\\""; break;
      case '\n' : oss << "\\n"; break;
      case '\t' : oss << "\\t"; break;
      case '\b' : oss << "\\b"; break;
      case '\f' : oss << "\\f"; break;
      default:
        if (isprint(c)) oss << c;
        else {
          oss << '\\' << oct << setfill('0') << setw(3)
              << static_cast<int>(static_cast<unsigned int>(c))
              << dec << setfill(' ');
          break;
        }
    }
  }
  return oss.str();
}

} // namespace cool_helper
