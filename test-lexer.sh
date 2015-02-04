#!/bin/sh

rm cool-lexer
make cool-lexer

if [ $? -gt 0 ]; then
  exit 1
fi

TEST_FILE_DIR=lexer-test-files
infiles=$(ls ${TEST_FILE_DIR}/*.cool)
cnt=$((0))
correct_cnt=$((0))
for infile in $infiles; do
  ./cool-lexer $infile |\
    awk '{ if (NR != 1) { for (i=2; i<=NF; i++) printf "%s ", $i; printf "\n"; } }' > A
  awk '{ if (NR != 1) { for (i=2; i<=NF; i++) printf "%s ", $i; printf "\n"; } }' ${infile}.out > B

  diff -y --suppress-common-lines A B > diff.out

  if [ $? -eq 0 ]; then
    correct_cnt=$((correct_cnt+1))
    echo "[PASS]\t$infile"
  else
    echo "[FAILE]\t$infile"
    echo "-----------------------------------------------------------------"
    echo "left column is mylexer output, right column is correct output"
    echo "-----------------------------------------------------------------"
    cat diff.out
    echo "-----------------------------------------------------------------"
    echo "press any key to continue"
    read answer
  fi

  cnt=$((cnt+1))
done

echo "Cool-Lexer Score: ${correct_cnt}/${cnt}"

rm A B diff.out
