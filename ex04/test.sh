RED='\033[0;31m'
GREEN='\033[0;32m'
RESET='\033[0m'
CYAN='\033[1;36m'
REPLACED='tree'
REPLACEMENT='lol'

function	doTest
{
	echo -e "$1" > test
	printf "${RED}Original:${RESET}\n"
	cat test
	./notsed test ${REPLACED} ${REPLACEMENT}
	printf "${GREEN}Replaced:${RESET}\n"
	cat test.replace
}

if [ -f "test" ]; 
	then rm "test"; 
	touch test;
fi
if [ -f "test.replace" ];
	then rm "test.replace";
fi
printf "${CYAN}To be replaced:\t${REPLACED}${RESET}\n"
printf "${CYAN}Replacement:\t${REPLACEMENT}${RESET}\n\n"
doTest "I do love ${REPLACED}s! lol"
doTest "I\nlove\n${REPLACED}s! more lol"
doTest ""
doTest "${REPLACED}"
doTest "Break line on end\n"
doTest "No break line on end"
doTest "${REPLACED}${REPLACED}${REPLACED}${REPLACED}${REPLACED}${REPLACED}${REPLACED}"

if [ -f "test" ]; 
	then rm "test";
fi
if [ -f "test.replace" ];
	then rm "test.replace";
fi