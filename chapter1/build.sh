#!/bin/bash

# if Makefile already exists, just rename it
make_file="Makefile"
if [ -f "$make_file" ]; then
  echo 'INFO: find Makefile in current directory, rename it to Makefile.origin instead'
  mv "$make_file" "${make_file}.origin"
fi

# generate make file body
source_file_list=$(ls *.cc)
for file in $source_file_list ;do
  target_file_list="${target_file_list} ${file/.cc/}"
  target_list="${target_list}${file/.cc/}:\n\tg++ -g -Wall -o ${file/.cc/} $file\n"
done

echo -e ".PHONY : ALL" >> "$make_file"
echo -e "ALL : $target_file_list\n" >> "$make_file"
echo -e "$target_list" >> "$make_file"
echo -e ".PHONY : clean" >> "$make_file"
echo -e "clean : \n\t rm -rf $target_file_list" >> "$make_file"

# tip for user
echo -e "INFO: done sucessfully"
