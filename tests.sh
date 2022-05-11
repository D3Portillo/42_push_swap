#! /bin/bash

HR="----------------------------------------"

cecho (){
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

test () {
  result=$(./push_swap $1)
  echo "Input: $1"
  echo -n "Output: "
  if [ "$result" ]
  then
    echo $result
  else
    echo "Empty"
  fi
  checker=$(./push_swap $1 | ./checker_linux $1 2>/dev/null)
  echo -n "Status: "
  if [[ "$checker" == "OK" ]]
  then
    cecho "GREEN" "OK"
  else
    cecho "RED" "KO"
  fi
  echo
}

describe "MAKEFILE"
make

describe "[SIZE=3] No sort"
test "1 2 3"

describe "[SIZE=3] Index 2 has the greatest value"
test "5 1 2"
test "3 2 1"
test "3 3 3"
