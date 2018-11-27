
extern zend_class_entry *test_strings_ce;

ZEPHIR_INIT_CLASS(Test_Strings);

PHP_METHOD(Test_Strings, camelize);
PHP_METHOD(Test_Strings, uncamelize);
PHP_METHOD(Test_Strings, testTrim);
PHP_METHOD(Test_Strings, testRtrim);
PHP_METHOD(Test_Strings, testLtrim);
PHP_METHOD(Test_Strings, testTrim2Params);
PHP_METHOD(Test_Strings, testRtrim2Params);
PHP_METHOD(Test_Strings, testLtrim2Params);
PHP_METHOD(Test_Strings, testImplode);
PHP_METHOD(Test_Strings, testStrpos);
PHP_METHOD(Test_Strings, testStrposOffset);
PHP_METHOD(Test_Strings, testExplode);
PHP_METHOD(Test_Strings, testExplodeStr);
PHP_METHOD(Test_Strings, testExplodeLimit);
PHP_METHOD(Test_Strings, testSubstr);
PHP_METHOD(Test_Strings, testSubstr2);
PHP_METHOD(Test_Strings, testSubstr3);
PHP_METHOD(Test_Strings, testSubstr4);
PHP_METHOD(Test_Strings, testAddslashes);
PHP_METHOD(Test_Strings, testStripslashes);
PHP_METHOD(Test_Strings, testStripcslashes);
PHP_METHOD(Test_Strings, testHashEquals);
PHP_METHOD(Test_Strings, testHardcodedMultilineString);
PHP_METHOD(Test_Strings, testEchoMultilineString);
PHP_METHOD(Test_Strings, testTrimMultilineString);
PHP_METHOD(Test_Strings, testWellEscapedMultilineString);
PHP_METHOD(Test_Strings, testInternedString1);
PHP_METHOD(Test_Strings, testInternedString2);
PHP_METHOD(Test_Strings, strToHex);
PHP_METHOD(Test_Strings, issue1267);

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_camelize, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, str)
#endif
	ZEND_ARG_INFO(0, delimiter)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_uncamelize, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, str)
#endif
	ZEND_ARG_INFO(0, delimiter)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testtrim, 0, 0, 1)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testrtrim, 0, 0, 1)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testltrim, 0, 0, 1)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testtrim2params, 0, 0, 2)
	ZEND_ARG_INFO(0, str)
	ZEND_ARG_INFO(0, charlist)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testrtrim2params, 0, 0, 2)
	ZEND_ARG_INFO(0, str)
	ZEND_ARG_INFO(0, charlist)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testltrim2params, 0, 0, 2)
	ZEND_ARG_INFO(0, str)
	ZEND_ARG_INFO(0, charlist)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testimplode, 0, 0, 2)
	ZEND_ARG_INFO(0, glue)
	ZEND_ARG_INFO(0, pieces)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_teststrpos, 0, 0, 2)
	ZEND_ARG_INFO(0, haystack)
	ZEND_ARG_INFO(0, needle)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_teststrposoffset, 0, 0, 3)
	ZEND_ARG_INFO(0, haystack)
	ZEND_ARG_INFO(0, needle)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, offset)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testexplode, 0, 0, 2)
	ZEND_ARG_INFO(0, delimiter)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testexplodestr, 0, 0, 1)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testexplodelimit, 0, 0, 2)
	ZEND_ARG_INFO(0, str)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, limit, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, limit)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testsubstr, 0, 0, 3)
	ZEND_ARG_INFO(0, str)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, from)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, len)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testsubstr2, 0, 0, 2)
	ZEND_ARG_INFO(0, str)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, from)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testsubstr3, 0, 0, 1)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testsubstr4, 0, 0, 1)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testaddslashes, 0, 0, 1)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_teststripslashes, 0, 0, 1)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_test_strings_teststripcslashes, 0, 1, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_test_strings_teststripcslashes, 0, 1, IS_STRING, NULL, 0)
#endif
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_test_strings_testhashequals, 0, 2, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_test_strings_testhashequals, 0, 2, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_INFO(0, str1)
	ZEND_ARG_INFO(0, str2)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_test_strings_strtohex, 0, 1, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_test_strings_strtohex, 0, 1, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, value)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_issue1267, 0, 0, 1)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(test_strings_method_entry) {
	PHP_ME(Test_Strings, camelize, arginfo_test_strings_camelize, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, uncamelize, arginfo_test_strings_uncamelize, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testTrim, arginfo_test_strings_testtrim, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testRtrim, arginfo_test_strings_testrtrim, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testLtrim, arginfo_test_strings_testltrim, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testTrim2Params, arginfo_test_strings_testtrim2params, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testRtrim2Params, arginfo_test_strings_testrtrim2params, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testLtrim2Params, arginfo_test_strings_testltrim2params, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testImplode, arginfo_test_strings_testimplode, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testStrpos, arginfo_test_strings_teststrpos, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testStrposOffset, arginfo_test_strings_teststrposoffset, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testExplode, arginfo_test_strings_testexplode, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testExplodeStr, arginfo_test_strings_testexplodestr, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testExplodeLimit, arginfo_test_strings_testexplodelimit, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testSubstr, arginfo_test_strings_testsubstr, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testSubstr2, arginfo_test_strings_testsubstr2, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testSubstr3, arginfo_test_strings_testsubstr3, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testSubstr4, arginfo_test_strings_testsubstr4, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testAddslashes, arginfo_test_strings_testaddslashes, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testStripslashes, arginfo_test_strings_teststripslashes, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testStripcslashes, arginfo_test_strings_teststripcslashes, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testHashEquals, arginfo_test_strings_testhashequals, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testHardcodedMultilineString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testEchoMultilineString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testTrimMultilineString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testWellEscapedMultilineString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testInternedString1, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testInternedString2, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, strToHex, arginfo_test_strings_strtohex, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, issue1267, arginfo_test_strings_issue1267, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
