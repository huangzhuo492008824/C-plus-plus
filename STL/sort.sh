#! /bin/sh
awk '{print $1}' name.txt|sort|uniq
