RESET="\033[0m"
BLACK="\033[30m"
RED="\033[31m"
GREEN="\033[32m"
YELLOW="\033[33m"
BLUE="\033[34m"
MAGENTA="\033[35m"
CYAN="\033[36m"
WHITE="\033[37m"

BOLDBLACK="\033[1m\033[30m"
BOLDRED="\033[1m\033[31m"
BOLDGREEN="\033[1m\033[32m"
BOLDYELLOW="\033[1m\033[33m"
BOLDBLUE="\033[1m\033[34m"
BOLDMAGENTA="\033[1m\033[35m"
BOLDCYAN="\033[1m\033[36m"
BOLDWHITE="\033[1m\033[37m"

function exec_test()
{
	echo
	echo $@
	./convert $@
	echo
}
function test_int
{
	printf "$BOLDCYAN /////////////////// INT TESTS //////////////// $RESET"
	echo 
	echo 
	printf "$BOLDYELLOW /////////////////// 0 INT TEST //////////////// $RESET"
	exec_test '0'
	printf "$BOLDYELLOW /////////////////// 42 TEST //////////////// $RESET"
	exec_test '42'
	printf "$BOLDYELLOW /////////////////// +42 TEST //////////////// $RESET"
	exec_test '+42'
	printf "$BOLDYELLOW /////////////////// 14a2 TEST //////////////// $RESET"
	exec_test '14a2'
	printf "$BOLDYELLOW /////////////////// MAX INT TEST //////////////// $RESET"
	exec_test '2147483647'
	printf "$BOLDYELLOW /////////////////// MAX INT + 1 TEST //////////////// $RESET"
	exec_test '2147483648'
	printf "$BOLDYELLOW /////////////////// MIN INT TEST //////////////// $RESET"
	exec_test '-2147483648'
	printf "$BOLDYELLOW /////////////////// MIN INT + 1 TEST //////////////// $RESET"
	exec_test '-2147483649'
	printf "$BOLDYELLOW /////////////////// 0 FLOAT TEST //////////////// $RESET"
	exec_test '0'
}

function test_char
{
	set -f
	printf "$BOLDCYAN /////////////////// CHAR TESTS //////////////// $RESET"
	echo 
	echo 
	printf "$BOLDYELLOW /////////////////// * TEST //////////////// $RESET"
	exec_test '*'
	printf "$BOLDYELLOW /////////////////// a TEST //////////////// $RESET"
	exec_test 'a'
	printf "$BOLDYELLOW /////////////////// string TEST //////////////// $RESET"
	exec_test 'string'
	printf "$BOLDYELLOW /////////////////// EMOJI TEST //////////////// $RESET"
	exec_test '😈'
}

function test_float
{
	printf "$BOLDCYAN /////////////////// FLOAT TESTS //////////////// $RESET"
	echo 
	echo 
	printf "$BOLDYELLOW /////////////////// 0 INT TEST //////////////// $RESET"
	exec_test '0.0f'
	printf "$BOLDYELLOW /////////////////// 42 TEST //////////////// $RESET"
	exec_test '42.0f'
	printf "$BOLDYELLOW /////////////////// 42 TEST //////////////// $RESET"
	exec_test '+42.0f'
	printf "$BOLDYELLOW /////////////////// 42 TEST //////////////// $RESET"
	exec_test '42.53405f'
	printf "$BOLDYELLOW /////////////////// MAX INT TEST //////////////// $RESET"
	exec_test '2147483647.0f'
	printf "$BOLDYELLOW /////////////////// MAX INT + 1 TEST //////////////// $RESET"
	exec_test '2147483648.0f'
	printf "$BOLDYELLOW /////////////////// MIN INT TEST //////////////// $RESET"
	exec_test '-2147483648.0f'
	printf "$BOLDYELLOW /////////////////// MIN INT + 1 TEST //////////////// $RESET"
	exec_test '-2147483649.0f'
}

function test_double
{
	printf "$BOLDCYAN /////////////////// DOUBLE TESTS //////////////// $RESET"
	echo 
	echo 
	printf "$BOLDYELLOW /////////////////// 0 INT TEST //////////////// $RESET"
	exec_test '0.0'
	printf "$BOLDYELLOW /////////////////// 42 TEST //////////////// $RESET"
	exec_test '42.0'
	printf "$BOLDYELLOW /////////////////// 42 TEST //////////////// $RESET"
	exec_test '+42.0'
	printf "$BOLDYELLOW /////////////////// 42 TEST //////////////// $RESET"
	exec_test '42.53405'
	printf "$BOLDYELLOW /////////////////// MAX INT TEST //////////////// $RESET"
	exec_test '2147483647.0'
	printf "$BOLDYELLOW /////////////////// MAX INT + 1 TEST //////////////// $RESET"
	exec_test '2147483648.0'
	printf "$BOLDYELLOW /////////////////// MIN INT TEST //////////////// $RESET"
	exec_test '-2147483648.0'
	printf "$BOLDYELLOW /////////////////// MIN INT + 1 TEST //////////////// $RESET"
	exec_test '-2147483649.0'
}

function special_case
{
printf "$BOLDCYAN /////////////////// SPECIAL CASES //////////////// $RESET"
	echo 
	echo
	printf "$BOLDYELLOW /////////////////// INF //////////////// $RESET"
	exec_test 'inf'
	printf "$BOLDYELLOW /////////////////// +INF //////////////// $RESET"
	exec_test '+inf'
	printf "$BOLDYELLOW /////////////////// -INF //////////////// $RESET"
	exec_test '-inf'
	printf "$BOLDYELLOW /////////////////// NAN //////////////// $RESET"
	exec_test 'nan'
	printf "$BOLDYELLOW /////////////////// inff //////////////// $RESET"
	exec_test 'inff'
	printf "$BOLDYELLOW /////////////////// +inff //////////////// $RESET"
	exec_test '+inff'
	printf "$BOLDYELLOW /////////////////// -inff //////////////// $RESET"
	exec_test '-inff'
	printf "$BOLDYELLOW /////////////////// nanf //////////////// $RESET"
	exec_test 'nanf'
}

main()
{
	test_int
	char_test
	test_float
	test_double
	special_case
}

main