/*
 *  The contents of this file are subject to the Initial
 *  Developer's Public License Version 1.0 (the "License");
 *  you may not use this file except in compliance with the
 *  License. You may obtain a copy of the License at
 *  http://www.ibphoenix.com/main.nfs?a=ibphoenix&page=ibp_idpl.
 *
 *  Software distributed under the License is distributed AS IS,
 *  WITHOUT WARRANTY OF ANY KIND, either express or implied.
 *  See the License for the specific language governing rights
 *  and limitations under the License.
 *
 *  The Original Code was created by Mark O'Donohue
 *  for the Firebird Open Source RDBMS project.
 *
 *  Copyright (c) 2002 Mark O'Donohue <skywalker@users.sourceforge.net>
 *  and all contributors signed below.
 *
 *  All Rights Reserved.
 *  Contributor(s): ______________________________________.
 *
 *  2005.05.19 Claudio Valderrama: signal tokens that aren't reserved in the
 *      engine thanks to special handling.
 *  Adriano dos Santos Fernandes
 */

// ASF: Do not add include guards to this file!

// CVC: The latest column indicates whether the token has special handling in
// the parser. If it does, KEYWORD_stringIsAToken will return false.
// I discovered isql was being fooled and put double quotes around those
// special cases unnecessarily.

#ifndef PARSER_TOKEN
#error PARSER_TOKEN must be defined before inclusion of this file
#define PARSER_TOKEN(ident, str, nonReserved)
#endif

PARSER_TOKEN(TOK_NOT_LSS, "!<", false)
PARSER_TOKEN(TOK_NEQ, "!=", false)
PARSER_TOKEN(TOK_NOT_GTR, "!>", false)
PARSER_TOKEN('(', "(", false)
PARSER_TOKEN(')', ")", false)
PARSER_TOKEN(',', ",", false)
PARSER_TOKEN('<', "<", false)
PARSER_TOKEN(TOK_LEQ, "<=", false)
PARSER_TOKEN(TOK_NEQ, "<>", false)	// Alias of !=
PARSER_TOKEN('=', "=", false)
PARSER_TOKEN('>', ">", false)
PARSER_TOKEN(TOK_GEQ, ">=", false)
PARSER_TOKEN(TOK_BIND_PARAM, ":=", false)
PARSER_TOKEN(TOK_ABS, "ABS", true)
PARSER_TOKEN(TOK_ABSOLUTE, "ABSOLUTE", true)
PARSER_TOKEN(TOK_ACCENT, "ACCENT", true)
PARSER_TOKEN(TOK_ACOS, "ACOS", true)
PARSER_TOKEN(TOK_ACOSH, "ACOSH", true)
PARSER_TOKEN(TOK_ACTION, "ACTION", true)
PARSER_TOKEN(TOK_ACTIVE, "ACTIVE", true)
PARSER_TOKEN(TOK_ADD, "ADD", false)
PARSER_TOKEN(TOK_ADMIN, "ADMIN", false)
PARSER_TOKEN(TOK_AFTER, "AFTER", true)
PARSER_TOKEN(TOK_ALL, "ALL", false)
PARSER_TOKEN(TOK_ALTER, "ALTER", false)
PARSER_TOKEN(TOK_ALWAYS, "ALWAYS", true)
PARSER_TOKEN(TOK_ANY_VALUE, "ANY_VALUE", true)
PARSER_TOKEN(TOK_AND, "AND", false)
PARSER_TOKEN(TOK_ANY, "ANY", false)
PARSER_TOKEN(TOK_AS, "AS", false)
PARSER_TOKEN(TOK_ASC, "ASC", true)	// Alias of ASCENDING
PARSER_TOKEN(TOK_ASC, "ASCENDING", true)
PARSER_TOKEN(TOK_ASCII_CHAR, "ASCII_CHAR", true)
PARSER_TOKEN(TOK_ASCII_VAL, "ASCII_VAL", true)
PARSER_TOKEN(TOK_ASIN, "ASIN", true)
PARSER_TOKEN(TOK_ASINH, "ASINH", true)
PARSER_TOKEN(TOK_AT, "AT", false)
PARSER_TOKEN(TOK_ATAN, "ATAN", true)
PARSER_TOKEN(TOK_ATAN2, "ATAN2", true)
PARSER_TOKEN(TOK_ATANH, "ATANH", true)
PARSER_TOKEN(TOK_AUTO, "AUTO", true)
PARSER_TOKEN(TOK_AUTONOMOUS, "AUTONOMOUS", true)
PARSER_TOKEN(TOK_AVG, "AVG", false)
PARSER_TOKEN(TOK_BACKUP, "BACKUP", true)
PARSER_TOKEN(TOK_BASE64_DECODE, "BASE64_DECODE", true)
PARSER_TOKEN(TOK_BASE64_ENCODE, "BASE64_ENCODE", true)
PARSER_TOKEN(TOK_BEFORE, "BEFORE", true)
PARSER_TOKEN(TOK_BEGIN, "BEGIN", false)
PARSER_TOKEN(TOK_BETWEEN, "BETWEEN", false)
PARSER_TOKEN(TOK_BIGINT, "BIGINT", false)
PARSER_TOKEN(TOK_BIN_AND, "BIN_AND", true)
PARSER_TOKEN(TOK_BIN_NOT, "BIN_NOT", true)
PARSER_TOKEN(TOK_BIN_OR, "BIN_OR", true)
PARSER_TOKEN(TOK_BIN_SHL, "BIN_SHL", true)
PARSER_TOKEN(TOK_BIN_SHR, "BIN_SHR", true)
PARSER_TOKEN(TOK_BIN_XOR, "BIN_XOR", true)
PARSER_TOKEN(TOK_BINARY, "BINARY", false)
PARSER_TOKEN(TOK_BIND, "BIND", true)
PARSER_TOKEN(TOK_BIT_LENGTH, "BIT_LENGTH", false)
PARSER_TOKEN(TOK_BLOB, "BLOB", false)
PARSER_TOKEN(TOK_BLOB_APPEND, "BLOB_APPEND", true)
PARSER_TOKEN(TOK_BLOCK, "BLOCK", true)
PARSER_TOKEN(TOK_BODY, "BODY", true)
PARSER_TOKEN(TOK_BOOLEAN, "BOOLEAN", false)
PARSER_TOKEN(TOK_BOTH, "BOTH", false)
PARSER_TOKEN(TOK_BREAK, "BREAK", true)
PARSER_TOKEN(TOK_BY, "BY", false)
PARSER_TOKEN(TOK_CALLER, "CALLER", true)
PARSER_TOKEN(TOK_CASCADE, "CASCADE", true)
PARSER_TOKEN(TOK_CASE, "CASE", false)
PARSER_TOKEN(TOK_CAST, "CAST", false)
PARSER_TOKEN(TOK_CEIL, "CEIL", true)	// Alias of CEILING
PARSER_TOKEN(TOK_CEIL, "CEILING", true)
PARSER_TOKEN(TOK_CHAR, "CHAR", false)
PARSER_TOKEN(TOK_CHAR_LENGTH, "CHAR_LENGTH", false)
PARSER_TOKEN(TOK_CHAR_TO_UUID, "CHAR_TO_UUID", true)
PARSER_TOKEN(TOK_CHARACTER, "CHARACTER", false)
PARSER_TOKEN(TOK_CHARACTER_LENGTH, "CHARACTER_LENGTH", false)
PARSER_TOKEN(TOK_CHECK, "CHECK", false)
PARSER_TOKEN(TOK_CLEAR, "CLEAR", true)
PARSER_TOKEN(TOK_CLOSE, "CLOSE", false)
PARSER_TOKEN(TOK_COALESCE, "COALESCE", true)
PARSER_TOKEN(TOK_COLLATE, "COLLATE", false)
PARSER_TOKEN(TOK_COLLATION, "COLLATION", true)
PARSER_TOKEN(TOK_COLUMN, "COLUMN", false)
PARSER_TOKEN(TOK_COMMENT, "COMMENT", false)
PARSER_TOKEN(TOK_COMMIT, "COMMIT", false)
PARSER_TOKEN(TOK_COMMITTED, "COMMITTED", true)
PARSER_TOKEN(TOK_COMMON, "COMMON", true)
PARSER_TOKEN(TOK_COMPARE_DECFLOAT, "COMPARE_DECFLOAT", true)
PARSER_TOKEN(TOK_COMPUTED, "COMPUTED", true)
PARSER_TOKEN(TOK_CONDITIONAL, "CONDITIONAL", true)
PARSER_TOKEN(TOK_CONNECT, "CONNECT", false)
PARSER_TOKEN(TOK_CONNECTIONS, "CONNECTIONS", true)
PARSER_TOKEN(TOK_CONSISTENCY, "CONSISTENCY", true)
PARSER_TOKEN(TOK_CONSTRAINT, "CONSTRAINT", false)
PARSER_TOKEN(TOK_CONTAINING, "CONTAINING", true)
PARSER_TOKEN(TOK_CONTINUE, "CONTINUE", true)
PARSER_TOKEN(TOK_CORR, "CORR", false)
PARSER_TOKEN(TOK_COS, "COS", true)
PARSER_TOKEN(TOK_COSH, "COSH", true)
PARSER_TOKEN(TOK_COT, "COT", true)
PARSER_TOKEN(TOK_COUNT, "COUNT", false)
PARSER_TOKEN(TOK_COUNTER, "COUNTER", true)
PARSER_TOKEN(TOK_COVAR_POP, "COVAR_POP", false)
PARSER_TOKEN(TOK_COVAR_SAMP, "COVAR_SAMP", false)
PARSER_TOKEN(TOK_CREATE, "CREATE", false)
PARSER_TOKEN(TOK_CROSS, "CROSS", false)
PARSER_TOKEN(TOK_CRYPT_HASH, "CRYPT_HASH", true)
PARSER_TOKEN(TOK_CSTRING, "CSTRING", true)
PARSER_TOKEN(TOK_CTR_BIG_ENDIAN, "CTR_BIG_ENDIAN", true)
PARSER_TOKEN(TOK_CTR_LENGTH, "CTR_LENGTH", true)
PARSER_TOKEN(TOK_CTR_LITTLE_ENDIAN, "CTR_LITTLE_ENDIAN", true)
PARSER_TOKEN(TOK_CUME_DIST, "CUME_DIST", true)
PARSER_TOKEN(TOK_CURRENT, "CURRENT", false)
PARSER_TOKEN(TOK_CURRENT_CONNECTION, "CURRENT_CONNECTION", false)
PARSER_TOKEN(TOK_CURRENT_DATE, "CURRENT_DATE", false)
PARSER_TOKEN(TOK_CURRENT_ROLE, "CURRENT_ROLE", false)
PARSER_TOKEN(TOK_CURRENT_TIME, "CURRENT_TIME", false)
PARSER_TOKEN(TOK_CURRENT_TIMESTAMP, "CURRENT_TIMESTAMP", false)
PARSER_TOKEN(TOK_CURRENT_TRANSACTION, "CURRENT_TRANSACTION", false)
PARSER_TOKEN(TOK_CURRENT_USER, "CURRENT_USER", false)
PARSER_TOKEN(TOK_CURSOR, "CURSOR", false)
PARSER_TOKEN(TOK_DATABASE, "DATABASE", true)
PARSER_TOKEN(TOK_DATA, "DATA", true)
PARSER_TOKEN(TOK_DATE, "DATE", false)
PARSER_TOKEN(TOK_DATEADD, "DATEADD", true)
PARSER_TOKEN(TOK_DATEDIFF, "DATEDIFF", true)
PARSER_TOKEN(TOK_DAY, "DAY", false)
PARSER_TOKEN(TOK_DDL, "DDL", true)
PARSER_TOKEN(TOK_DEBUG, "DEBUG", true)
PARSER_TOKEN(TOK_DEC, "DEC", false)
PARSER_TOKEN(TOK_DECFLOAT, "DECFLOAT", false)
PARSER_TOKEN(TOK_DECIMAL, "DECIMAL", false)
PARSER_TOKEN(TOK_DECLARE, "DECLARE", false)
PARSER_TOKEN(TOK_DECODE, "DECODE", true)
PARSER_TOKEN(TOK_DECRYPT, "DECRYPT", true)
PARSER_TOKEN(TOK_DEFAULT, "DEFAULT", false)
PARSER_TOKEN(TOK_DEFINER, "DEFINER", true)
PARSER_TOKEN(TOK_DELETE, "DELETE", false)
PARSER_TOKEN(TOK_DELETING, "DELETING", false)
PARSER_TOKEN(TOK_DENSE_RANK, "DENSE_RANK", true)
PARSER_TOKEN(TOK_DESC, "DESC", true)	// Alias of DESCENDING
PARSER_TOKEN(TOK_DESC, "DESCENDING", true)
PARSER_TOKEN(TOK_DESCRIPTOR,	"DESCRIPTOR", true)
PARSER_TOKEN(TOK_DETERMINISTIC, "DETERMINISTIC", false)
PARSER_TOKEN(TOK_DIFFERENCE, "DIFFERENCE", true)
PARSER_TOKEN(TOK_DISABLE, "DISABLE", true)
PARSER_TOKEN(TOK_DISCONNECT, "DISCONNECT", false)
PARSER_TOKEN(TOK_DISTINCT, "DISTINCT", false)
PARSER_TOKEN(TOK_DO, "DO", true)
PARSER_TOKEN(TOK_DOMAIN, "DOMAIN", true)
PARSER_TOKEN(TOK_DOUBLE, "DOUBLE", false)
PARSER_TOKEN(TOK_DROP, "DROP", false)
PARSER_TOKEN(TOK_ELSE, "ELSE", false)
PARSER_TOKEN(TOK_ENABLE, "ENABLE", true)
PARSER_TOKEN(TOK_ENCRYPT, "ENCRYPT", true)
PARSER_TOKEN(TOK_END, "END", false)
PARSER_TOKEN(TOK_ENGINE, "ENGINE", true)
PARSER_TOKEN(TOK_ENTRY_POINT, "ENTRY_POINT", true)
PARSER_TOKEN(TOK_ESCAPE, "ESCAPE", false)
PARSER_TOKEN(TOK_EXCEPTION, "EXCEPTION", true)
PARSER_TOKEN(TOK_EXCESS, "EXCESS", true)
PARSER_TOKEN(TOK_EXCLUDE, "EXCLUDE", true)
PARSER_TOKEN(TOK_EXECUTE, "EXECUTE", false)
PARSER_TOKEN(TOK_EXISTS, "EXISTS", false)
PARSER_TOKEN(TOK_EXIT, "EXIT", true)
PARSER_TOKEN(TOK_EXP, "EXP", true)
PARSER_TOKEN(TOK_EXTENDED, "EXTENDED", true)
PARSER_TOKEN(TOK_EXTERNAL, "EXTERNAL", false)
PARSER_TOKEN(TOK_EXTRACT, "EXTRACT", false)
PARSER_TOKEN(TOK_FALSE, "FALSE", false)
PARSER_TOKEN(TOK_FETCH, "FETCH", false)
PARSER_TOKEN(TOK_FILE, "FILE", true)
PARSER_TOKEN(TOK_FILTER, "FILTER", false)
PARSER_TOKEN(TOK_FIRST, "FIRST", true)
PARSER_TOKEN(TOK_FIRST_DAY, "FIRST_DAY", true)
PARSER_TOKEN(TOK_FIRST_VALUE, "FIRST_VALUE", true)
PARSER_TOKEN(TOK_FIRSTNAME, "FIRSTNAME", true)
PARSER_TOKEN(TOK_FLOAT, "FLOAT", false)
PARSER_TOKEN(TOK_FLOOR, "FLOOR", true)
PARSER_TOKEN(TOK_FOLLOWING, "FOLLOWING", true)
PARSER_TOKEN(TOK_FOR, "FOR", false)
PARSER_TOKEN(TOK_FOREIGN, "FOREIGN", false)
PARSER_TOKEN(TOK_FREE_IT, "FREE_IT", true)
PARSER_TOKEN(TOK_FROM, "FROM", false)
PARSER_TOKEN(TOK_FULL, "FULL", false)
PARSER_TOKEN(TOK_FUNCTION, "FUNCTION", false)
PARSER_TOKEN(TOK_GDSCODE, "GDSCODE", false)
PARSER_TOKEN(TOK_GENERATED, "GENERATED", true)
PARSER_TOKEN(TOK_GENERATOR, "GENERATOR", true)
PARSER_TOKEN(TOK_GEN_ID, "GEN_ID", true)
PARSER_TOKEN(TOK_GEN_UUID, "GEN_UUID", true)
PARSER_TOKEN(TOK_GLOBAL, "GLOBAL", false)
PARSER_TOKEN(TOK_GRANT, "GRANT", false)
PARSER_TOKEN(TOK_GRANTED, "GRANTED", true)
PARSER_TOKEN(TOK_GROUP, "GROUP", false)
PARSER_TOKEN(TOK_HASH, "HASH", true)
PARSER_TOKEN(TOK_HAVING, "HAVING", false)
PARSER_TOKEN(TOK_HEX_DECODE, "HEX_DECODE", true)
PARSER_TOKEN(TOK_HEX_ENCODE, "HEX_ENCODE", true)
PARSER_TOKEN(TOK_HOUR, "HOUR", false)
PARSER_TOKEN(TOK_IDENTITY, "IDENTITY", true)
PARSER_TOKEN(TOK_IDLE, "IDLE", true)
PARSER_TOKEN(TOK_IF, "IF", true)
PARSER_TOKEN(TOK_IGNORE, "IGNORE", true)
PARSER_TOKEN(TOK_IIF, "IIF", true)
PARSER_TOKEN(TOK_IN, "IN", false)
PARSER_TOKEN(TOK_INACTIVE, "INACTIVE", true)
PARSER_TOKEN(TOK_INCLUDE, "INCLUDE", true)
PARSER_TOKEN(TOK_INCREMENT, "INCREMENT", true)
PARSER_TOKEN(TOK_INDEX, "INDEX", false)
PARSER_TOKEN(TOK_INNER, "INNER", false)
PARSER_TOKEN(TOK_INPUT_TYPE, "INPUT_TYPE", true)
PARSER_TOKEN(TOK_INSENSITIVE, "INSENSITIVE", false)
PARSER_TOKEN(TOK_INSERT, "INSERT", false)
PARSER_TOKEN(TOK_INSERTING, "INSERTING", false)
PARSER_TOKEN(TOK_INT, "INT", false)
PARSER_TOKEN(TOK_INT128, "INT128", false)
PARSER_TOKEN(TOK_INTEGER, "INTEGER", false)
PARSER_TOKEN(TOK_INTO, "INTO", false)
PARSER_TOKEN(TOK_INVOKER, "INVOKER", true)
PARSER_TOKEN(TOK_IS, "IS", false)
PARSER_TOKEN(TOK_ISOLATION, "ISOLATION", true)
PARSER_TOKEN(TOK_IV, "IV", true)
PARSER_TOKEN(TOK_JOIN, "JOIN", false)
PARSER_TOKEN(TOK_KEY, "KEY", true)
PARSER_TOKEN(TOK_LAG, "LAG", true)
PARSER_TOKEN(TOK_LAST, "LAST", true)
PARSER_TOKEN(TOK_LAST_DAY, "LAST_DAY", true)
PARSER_TOKEN(TOK_LAST_VALUE, "LAST_VALUE", true)
PARSER_TOKEN(TOK_LASTNAME, "LASTNAME", true)
PARSER_TOKEN(TOK_LEAD, "LEAD", true)
PARSER_TOKEN(TOK_LEADING, "LEADING", false)
PARSER_TOKEN(TOK_LEAVE, "LEAVE", true)
PARSER_TOKEN(TOK_LEFT, "LEFT", false)
PARSER_TOKEN(TOK_LEGACY, "LEGACY", true)
PARSER_TOKEN(TOK_LENGTH, "LENGTH", true)
PARSER_TOKEN(TOK_LEVEL, "LEVEL", true)
PARSER_TOKEN(TOK_LIFETIME, "LIFETIME", true)
PARSER_TOKEN(TOK_LIKE, "LIKE", false)
PARSER_TOKEN(TOK_LIMBO, "LIMBO", true)
PARSER_TOKEN(TOK_LINGER, "LINGER", true)
PARSER_TOKEN(TOK_LIST, "LIST", true)
PARSER_TOKEN(TOK_LN, "LN", true)
PARSER_TOKEN(TOK_LATERAL, "LATERAL", false)
PARSER_TOKEN(TOK_LOCAL, "LOCAL", false)
PARSER_TOKEN(TOK_LOCALTIME, "LOCALTIME", false)
PARSER_TOKEN(TOK_LOCALTIMESTAMP, "LOCALTIMESTAMP", false)
PARSER_TOKEN(TOK_LOCK, "LOCK", true)
PARSER_TOKEN(TOK_LOCKED, "LOCKED", true)
PARSER_TOKEN(TOK_LOG, "LOG", true)
PARSER_TOKEN(TOK_LOG10, "LOG10", true)
PARSER_TOKEN(TOK_LONG, "LONG", false)
PARSER_TOKEN(TOK_LOWER, "LOWER", false)
PARSER_TOKEN(TOK_LPAD, "LPAD", true)
PARSER_TOKEN(TOK_LPARAM, "LPARAM", true)
PARSER_TOKEN(TOK_MAKE_DBKEY, "MAKE_DBKEY", true)
PARSER_TOKEN(TOK_MANUAL, "MANUAL", true)
PARSER_TOKEN(TOK_MAPPING, "MAPPING", true)
PARSER_TOKEN(TOK_MATCHED, "MATCHED", true)
PARSER_TOKEN(TOK_MATCHING, "MATCHING", true)
PARSER_TOKEN(TOK_MAXIMUM, "MAX", false)
PARSER_TOKEN(TOK_MAXVALUE, "MAXVALUE", true)
PARSER_TOKEN(TOK_MERGE, "MERGE", false)
PARSER_TOKEN(TOK_MESSAGE, "MESSAGE", true)
PARSER_TOKEN(TOK_MILLISECOND, "MILLISECOND", true)
PARSER_TOKEN(TOK_MIDDLENAME, "MIDDLENAME", true)
PARSER_TOKEN(TOK_MINIMUM, "MIN", false)
PARSER_TOKEN(TOK_MINUTE, "MINUTE", false)
PARSER_TOKEN(TOK_MINVALUE, "MINVALUE", true)
PARSER_TOKEN(TOK_MOD, "MOD", true)
PARSER_TOKEN(TOK_MODE, "MODE", true)
PARSER_TOKEN(TOK_MODULE_NAME, "MODULE_NAME", true)
PARSER_TOKEN(TOK_MONTH, "MONTH", false)
PARSER_TOKEN(TOK_NAME, "NAME", true)
PARSER_TOKEN(TOK_NAMES, "NAMES", true)
PARSER_TOKEN(TOK_NATIONAL, "NATIONAL", false)
PARSER_TOKEN(TOK_NATIVE, "NATIVE", true)
PARSER_TOKEN(TOK_NATURAL, "NATURAL", false)
PARSER_TOKEN(TOK_NCHAR, "NCHAR", false)
PARSER_TOKEN(TOK_NEXT, "NEXT", true)
PARSER_TOKEN(TOK_NO, "NO", false)
PARSER_TOKEN(TOK_NORMALIZE_DECFLOAT, "NORMALIZE_DECFLOAT", true)
PARSER_TOKEN(TOK_NOT, "NOT", false)
PARSER_TOKEN(TOK_NTH_VALUE, "NTH_VALUE", true)
PARSER_TOKEN(TOK_NTILE, "NTILE", true)
PARSER_TOKEN(TOK_NULLIF, "NULLIF", true)
PARSER_TOKEN(TOK_NULL, "NULL", false)
PARSER_TOKEN(TOK_NULLS, "NULLS", true)
PARSER_TOKEN(TOK_NUMBER, "NUMBER", true)
PARSER_TOKEN(TOK_NUMERIC, "NUMERIC", false)
PARSER_TOKEN(TOK_OCTET_LENGTH, "OCTET_LENGTH", false)
PARSER_TOKEN(TOK_OF, "OF", false)
PARSER_TOKEN(TOK_OFFSET, "OFFSET", false)
PARSER_TOKEN(TOK_OLDEST, "OLDEST", true)
PARSER_TOKEN(TOK_ON, "ON", false)
PARSER_TOKEN(TOK_ONLY, "ONLY", false)
PARSER_TOKEN(TOK_OPEN, "OPEN", false)
PARSER_TOKEN(TOK_OPTIMIZE, "OPTIMIZE", true)
PARSER_TOKEN(TOK_OPTION, "OPTION", true)
PARSER_TOKEN(TOK_OR, "OR", false)
PARSER_TOKEN(TOK_ORDER, "ORDER", false)
PARSER_TOKEN(TOK_OS_NAME, "OS_NAME", true)
PARSER_TOKEN(TOK_OTHERS, "OTHERS", true)
PARSER_TOKEN(TOK_OUTER, "OUTER", false)
PARSER_TOKEN(TOK_OUTPUT_TYPE, "OUTPUT_TYPE", true)
PARSER_TOKEN(TOK_OVER, "OVER", false)
PARSER_TOKEN(TOK_OVERFLOW, "OVERFLOW", true)
PARSER_TOKEN(TOK_OVERLAY, "OVERLAY", true)
PARSER_TOKEN(TOK_OVERRIDING, "OVERRIDING", true)
PARSER_TOKEN(TOK_PACKAGE, "PACKAGE", true)
PARSER_TOKEN(TOK_PAD, "PAD", true)
PARSER_TOKEN(TOK_PAGE, "PAGE", true)
PARSER_TOKEN(TOK_PAGES, "PAGES", true)
PARSER_TOKEN(TOK_PAGE_SIZE, "PAGE_SIZE", true)
PARSER_TOKEN(TOK_PARAMETER, "PARAMETER", false)
PARSER_TOKEN(TOK_PARTITION, "PARTITION", true)
PARSER_TOKEN(TOK_PASSWORD, "PASSWORD", true)
PARSER_TOKEN(TOK_PERCENT_RANK, "PERCENT_RANK", true)
PARSER_TOKEN(TOK_PI, "PI", true)
PARSER_TOKEN(TOK_PKCS_1_5, "PKCS_1_5", true)
PARSER_TOKEN(TOK_PLACING, "PLACING", true)
PARSER_TOKEN(TOK_PLAN, "PLAN", false)
PARSER_TOKEN(TOK_PLUGIN, "PLUGIN", true)
PARSER_TOKEN(TOK_POOL, "POOL", true)
PARSER_TOKEN(TOK_POSITION, "POSITION", false)
PARSER_TOKEN(TOK_POST_EVENT, "POST_EVENT", false)
PARSER_TOKEN(TOK_POWER, "POWER", true)
PARSER_TOKEN(TOK_PRECEDING, "PRECEDING", true)
PARSER_TOKEN(TOK_PRECISION, "PRECISION", false)
PARSER_TOKEN(TOK_PRESERVE, "PRESERVE", true)
PARSER_TOKEN(TOK_PRIMARY, "PRIMARY", false)
PARSER_TOKEN(TOK_PRIOR, "PRIOR", true)
PARSER_TOKEN(TOK_PRIVILEGE, "PRIVILEGE", true)
PARSER_TOKEN(TOK_PRIVILEGES, "PRIVILEGES", true)
PARSER_TOKEN(TOK_PROCEDURE, "PROCEDURE", false)
PARSER_TOKEN(TOK_PROTECTED, "PROTECTED", true)
PARSER_TOKEN(TOK_PUBLICATION, "PUBLICATION", false)
PARSER_TOKEN(TOK_QUANTIZE, "QUANTIZE", true)
PARSER_TOKEN(TOK_QUARTER, "QUARTER", true)
PARSER_TOKEN(TOK_RAND, "RAND", true)
PARSER_TOKEN(TOK_RANGE, "RANGE", true)
PARSER_TOKEN(TOK_RANK, "RANK", true)
PARSER_TOKEN(TOK_DB_KEY, "RDB$DB_KEY", false)
PARSER_TOKEN(TOK_RDB_ERROR, "RDB$ERROR", false)
PARSER_TOKEN(TOK_RDB_GET_CONTEXT, "RDB$GET_CONTEXT", false)
PARSER_TOKEN(TOK_RDB_GET_TRANSACTION_CN, "RDB$GET_TRANSACTION_CN", false)
PARSER_TOKEN(TOK_RDB_RECORD_VERSION, "RDB$RECORD_VERSION", false)
PARSER_TOKEN(TOK_RDB_ROLE_IN_USE, "RDB$ROLE_IN_USE", false)
PARSER_TOKEN(TOK_RDB_SET_CONTEXT, "RDB$SET_CONTEXT", false)
PARSER_TOKEN(TOK_RDB_SYSTEM_PRIVILEGE, "RDB$SYSTEM_PRIVILEGE", false)
PARSER_TOKEN(TOK_READ, "READ", true)
PARSER_TOKEN(TOK_REAL, "REAL", false)
PARSER_TOKEN(TOK_VERSION, "RECORD_VERSION", false)
PARSER_TOKEN(TOK_RECREATE, "RECREATE", false)
PARSER_TOKEN(TOK_RECURSIVE, "RECURSIVE", false)
PARSER_TOKEN(TOK_REFERENCES, "REFERENCES", false)
PARSER_TOKEN(TOK_REGR_AVGX, "REGR_AVGX", false)
PARSER_TOKEN(TOK_REGR_AVGY, "REGR_AVGY", false)
PARSER_TOKEN(TOK_REGR_COUNT, "REGR_COUNT", false)
PARSER_TOKEN(TOK_REGR_INTERCEPT, "REGR_INTERCEPT", false)
PARSER_TOKEN(TOK_REGR_R2, "REGR_R2", false)
PARSER_TOKEN(TOK_REGR_SLOPE, "REGR_SLOPE", false)
PARSER_TOKEN(TOK_REGR_SXX, "REGR_SXX", false)
PARSER_TOKEN(TOK_REGR_SXY, "REGR_SXY", false)
PARSER_TOKEN(TOK_REGR_SYY, "REGR_SYY", false)
PARSER_TOKEN(TOK_RELATIVE, "RELATIVE", true)
PARSER_TOKEN(TOK_RELEASE, "RELEASE", false)
PARSER_TOKEN(TOK_REPLACE, "REPLACE", true)
PARSER_TOKEN(TOK_REQUESTS, "REQUESTS", true)
PARSER_TOKEN(TOK_RESERVING, "RESERV", true)	// Alias of RESERVING
PARSER_TOKEN(TOK_RESERVING, "RESERVING", true)
PARSER_TOKEN(TOK_RESET, "RESET", true)
PARSER_TOKEN(TOK_RESETTING, "RESETTING", false)
PARSER_TOKEN(TOK_RESTART, "RESTART", true)
PARSER_TOKEN(TOK_RESTRICT, "RESTRICT", true)
PARSER_TOKEN(TOK_RETAIN, "RETAIN", true)
PARSER_TOKEN(TOK_RETURN, "RETURN", false)
PARSER_TOKEN(TOK_RETURNING, "RETURNING", true)
PARSER_TOKEN(TOK_RETURNING_VALUES, "RETURNING_VALUES", false)
PARSER_TOKEN(TOK_RETURNS, "RETURNS", false)
PARSER_TOKEN(TOK_REVERSE, "REVERSE", true)
PARSER_TOKEN(TOK_REVOKE, "REVOKE", false)
PARSER_TOKEN(TOK_RIGHT, "RIGHT", false)
PARSER_TOKEN(TOK_ROLE, "ROLE", true)
PARSER_TOKEN(TOK_ROLLBACK, "ROLLBACK", false)
PARSER_TOKEN(TOK_ROUND, "ROUND", true)
PARSER_TOKEN(TOK_ROW, "ROW", false)
PARSER_TOKEN(TOK_ROW_COUNT, "ROW_COUNT", false)
PARSER_TOKEN(TOK_ROW_NUMBER, "ROW_NUMBER", true)
PARSER_TOKEN(TOK_ROWS, "ROWS", false)
PARSER_TOKEN(TOK_RPAD, "RPAD", true)
PARSER_TOKEN(TOK_RSA_DECRYPT, "RSA_DECRYPT", true)
PARSER_TOKEN(TOK_RSA_ENCRYPT, "RSA_ENCRYPT", true)
PARSER_TOKEN(TOK_RSA_PRIVATE, "RSA_PRIVATE", true)
PARSER_TOKEN(TOK_RSA_PUBLIC, "RSA_PUBLIC", true)
PARSER_TOKEN(TOK_RSA_SIGN_HASH, "RSA_SIGN_HASH", true)
PARSER_TOKEN(TOK_RSA_VERIFY_HASH, "RSA_VERIFY_HASH", true)
PARSER_TOKEN(TOK_SALT_LENGTH, "SALT_LENGTH", true)
PARSER_TOKEN(TOK_SAVEPOINT, "SAVEPOINT", false)
PARSER_TOKEN(TOK_SCALAR_ARRAY, "SCALAR_ARRAY", true)
PARSER_TOKEN(TOK_DATABASE, "SCHEMA", false)	// Alias of DATABASE
PARSER_TOKEN(TOK_SCROLL, "SCROLL", false)
PARSER_TOKEN(TOK_SECOND, "SECOND", false)
PARSER_TOKEN(TOK_SECURITY, "SECURITY", true)
PARSER_TOKEN(TOK_SEGMENT, "SEGMENT", true)
PARSER_TOKEN(TOK_SELECT, "SELECT", false)
PARSER_TOKEN(TOK_SENSITIVE, "SENSITIVE", false)
PARSER_TOKEN(TOK_SEQUENCE, "SEQUENCE", true)
PARSER_TOKEN(TOK_SERVERWIDE, "SERVERWIDE", true)
PARSER_TOKEN(TOK_SESSION, "SESSION", true)
PARSER_TOKEN(TOK_SET, "SET", false)
PARSER_TOKEN(TOK_SHADOW, "SHADOW", true)
PARSER_TOKEN(TOK_SHARED, "SHARED", true)
PARSER_TOKEN(TOK_SIGN, "SIGN", true)
PARSER_TOKEN(TOK_SIGNATURE, "SIGNATURE", true)
PARSER_TOKEN(TOK_SIMILAR, "SIMILAR", false)
PARSER_TOKEN(TOK_SIN, "SIN", true)
PARSER_TOKEN(TOK_SINGULAR, "SINGULAR", true)
PARSER_TOKEN(TOK_SINH, "SINH", true)
PARSER_TOKEN(TOK_SIZE, "SIZE", true)
PARSER_TOKEN(TOK_SKIP, "SKIP", true)
PARSER_TOKEN(TOK_SMALLINT, "SMALLINT", false)
PARSER_TOKEN(TOK_SNAPSHOT, "SNAPSHOT", true)
PARSER_TOKEN(TOK_SOME, "SOME", false)
PARSER_TOKEN(TOK_SORT, "SORT", true)
PARSER_TOKEN(TOK_SOURCE, "SOURCE", true)
PARSER_TOKEN(TOK_SPACE, "SPACE", true)
PARSER_TOKEN(TOK_SQL, "SQL", true)
PARSER_TOKEN(TOK_SQLCODE, "SQLCODE", false)
PARSER_TOKEN(TOK_SQLSTATE, "SQLSTATE", false)
PARSER_TOKEN(TOK_SQRT, "SQRT", true)
PARSER_TOKEN(TOK_STABILITY, "STABILITY", true)
PARSER_TOKEN(TOK_START, "START", false)
PARSER_TOKEN(TOK_STARTING, "STARTING", true)
PARSER_TOKEN(TOK_STARTING, "STARTS", true)	// Alias of STARTING
PARSER_TOKEN(TOK_STATEMENT, "STATEMENT", true)
PARSER_TOKEN(TOK_STATISTICS, "STATISTICS", true)
PARSER_TOKEN(TOK_STDDEV_POP, "STDDEV_POP", false)
PARSER_TOKEN(TOK_STDDEV_SAMP, "STDDEV_SAMP", false)
PARSER_TOKEN(TOK_SUBSTRING,	"SUBSTRING", true)
PARSER_TOKEN(TOK_SUB_TYPE, "SUB_TYPE", true)
PARSER_TOKEN(TOK_SUM, "SUM", false)
PARSER_TOKEN(TOK_SUSPEND, "SUSPEND", true)
PARSER_TOKEN(TOK_SYSTEM, "SYSTEM", true)
PARSER_TOKEN(TOK_TABLE, "TABLE", false)
PARSER_TOKEN(TOK_TAGS, "TAGS", true)
PARSER_TOKEN(TOK_TAN, "TAN", true)
PARSER_TOKEN(TOK_TANH, "TANH", true)
PARSER_TOKEN(TOK_TARGET, "TARGET", true)
PARSER_TOKEN(TOK_TEMPORARY, "TEMPORARY", true)
PARSER_TOKEN(TOK_THEN, "THEN", false)
PARSER_TOKEN(TOK_TIES, "TIES", true)
PARSER_TOKEN(TOK_TIME, "TIME", false)
PARSER_TOKEN(TOK_TIMESTAMP, "TIMESTAMP", false)
PARSER_TOKEN(TOK_TIMEOUT, "TIMEOUT", true)
PARSER_TOKEN(TOK_TIMEZONE_HOUR, "TIMEZONE_HOUR", false)
PARSER_TOKEN(TOK_TIMEZONE_MINUTE, "TIMEZONE_MINUTE", false)
PARSER_TOKEN(TOK_TIMEZONE_NAME, "TIMEZONE_NAME", true)
PARSER_TOKEN(TOK_TO, "TO", false)
PARSER_TOKEN(TOK_TOTALORDER, "TOTALORDER", true)
PARSER_TOKEN(TOK_TRAILING, "TRAILING", false)
PARSER_TOKEN(TOK_TRANSACTION, "TRANSACTION", true)
PARSER_TOKEN(TOK_TRAPS, "TRAPS", true)
PARSER_TOKEN(TOK_TRIGGER, "TRIGGER", false)
PARSER_TOKEN(TOK_TRIM, "TRIM", false)
PARSER_TOKEN(TOK_TRUE, "TRUE", false)
PARSER_TOKEN(TOK_TRUNC, "TRUNC", true)
PARSER_TOKEN(TOK_TRUSTED, "TRUSTED", true)
PARSER_TOKEN(TOK_TWO_PHASE, "TWO_PHASE", true)
PARSER_TOKEN(TOK_TYPE, "TYPE", true)
PARSER_TOKEN(TOK_UNBOUNDED, "UNBOUNDED", false)
PARSER_TOKEN(TOK_UNCOMMITTED, "UNCOMMITTED", true)
PARSER_TOKEN(TOK_UNDO, "UNDO", true)
PARSER_TOKEN(TOK_UNICODE_CHAR, "UNICODE_CHAR", true)
PARSER_TOKEN(TOK_UNICODE_VAL, "UNICODE_VAL", true)
PARSER_TOKEN(TOK_UNION, "UNION", false)
PARSER_TOKEN(TOK_UNIQUE, "UNIQUE", false)
PARSER_TOKEN(TOK_UNKNOWN, "UNKNOWN", false)
PARSER_TOKEN(TOK_UPDATE, "UPDATE", false)
PARSER_TOKEN(TOK_UPDATING, "UPDATING", false)
PARSER_TOKEN(TOK_UPPER, "UPPER", false)
PARSER_TOKEN(TOK_USAGE, "USAGE", true)
PARSER_TOKEN(TOK_USER, "USER", false)
PARSER_TOKEN(TOK_USING, "USING", false)
PARSER_TOKEN(TOK_UUID_TO_CHAR, "UUID_TO_CHAR", true)
PARSER_TOKEN(TOK_VALUE, "VALUE", false)
PARSER_TOKEN(TOK_VALUES, "VALUES", false)
PARSER_TOKEN(TOK_VAR_POP, "VAR_POP", false)
PARSER_TOKEN(TOK_VAR_SAMP, "VAR_SAMP", false)
PARSER_TOKEN(TOK_VARBINARY, "VARBINARY", false)
PARSER_TOKEN(TOK_VARCHAR, "VARCHAR", false)
PARSER_TOKEN(TOK_VARIABLE, "VARIABLE", false)
PARSER_TOKEN(TOK_VARYING, "VARYING", false)
PARSER_TOKEN(TOK_VIEW, "VIEW", false)
PARSER_TOKEN(TOK_WAIT, "WAIT", true)
PARSER_TOKEN(TOK_WEEK, "WEEK", true)
PARSER_TOKEN(TOK_WEEKDAY, "WEEKDAY", true)
PARSER_TOKEN(TOK_WHEN, "WHEN", false)
PARSER_TOKEN(TOK_WHERE, "WHERE", false)
PARSER_TOKEN(TOK_WHILE, "WHILE", false)
PARSER_TOKEN(TOK_WINDOW, "WINDOW", false)
PARSER_TOKEN(TOK_WITH, "WITH", false)
PARSER_TOKEN(TOK_WITHOUT, "WITHOUT", false)
PARSER_TOKEN(TOK_WORK, "WORK", true)
PARSER_TOKEN(TOK_WRITE, "WRITE", true)
PARSER_TOKEN(TOK_YEAR, "YEAR", false)
PARSER_TOKEN(TOK_YEARDAY, "YEARDAY", true)
PARSER_TOKEN(TOK_ZONE, "ZONE", true)
PARSER_TOKEN(TOK_NOT_LSS, "^<", false)	// Alias of !<
PARSER_TOKEN(TOK_NEQ, "^=", false)				// Alias of !=
PARSER_TOKEN(TOK_NOT_GTR, "^>", false)			// Alias of !>
PARSER_TOKEN(TOK_CONCATENATE, "||", false)
PARSER_TOKEN(TOK_NOT_LSS, "~<", false)	// Alias of !<
PARSER_TOKEN(TOK_NEQ, "~=", false)				// Alias of !=
PARSER_TOKEN(TOK_NOT_GTR, "~>", false)			// Alias of !>
