#! /bin/bash -e

HR="----------------------------------------"
total=0
status_ko=0

cecho () {
  RED="\033[0;31m"
  GREEN="\033[0;32m"
  YELLOW="\033[1;33m"
  CYAN="\033[0;36m"
  NC="\033[0m"
  BOLD="\033[1m"
  NORMAL="\033[22m"
  printf "${!1}${BOLD}${2}${NORMAL}${NC}\n"
}

describe () {
  cecho "CYAN" $HR
  cecho "CYAN" "$1"
  cecho "CYAN" $HR
}

get_results () {
  describe "TEST RESULTS"
  cecho "NC"    "TOTAL: $total"
  cecho "GREEN" "OKs:   $(($total - $status_ko))"
  if [ $status_ko -gt 0 ]
  then
    cecho "RED"   "KOs:   $status_ko"
    exit 1
  fi
}

test () {
  result=$(./push_swap $1 2>/dev/null)
  echo "Input: $1"
  echo -n "Output: "
  if [ "$result" ]
  then
    echo $result
  else
    echo "Empty"
  fi
  checker=$(echo $result | ./checker_linux $1 2>/dev/null)
  echo -n "Status: "
  ((total++))
  if [[ "$checker" == "OK" || "$checker" == "" ]]
  then
    cecho "GREEN" "OK"
  else
    cecho "RED" "KO"
    ((status_ko++))
  fi
  echo
}

describe "MAKEFILE"
make

describe "[SIZE=1] Empty"
test "1"
test "0"
test "-1"

describe "[SIZE=1] Wrong format"
test "1 a"
test "0 a"
test "-1 9999999999"

describe "[SIZE=2] No sort"
test "1 2"
test "0 1"
test "-1 4"

describe "[SIZE=2] No sort"
test "2 1"
test "3 1"
test "-2 -1"

describe "[SIZE=3] No sort"
test "1 2 3"
test "0 0 0"
test "-1 4 20"

describe "[SIZE=3] Index 1 has the greatest value"
test "1 6 3"
test "0 42 3"
test "-1 0 -2"
test "-42 42 20"

describe "[SIZE=3] Index 0 has the greatest value"
test "9 3 6"
test "9 0 0"
test "4 2 0"

get_results
