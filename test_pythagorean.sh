if (grep "scanf" *.c) then
   echo "Please don't use scanf in your programs"
   exit 1
fi

if (echo "73\n55\n48\n"  | ./pythagorean | grep -i "yes" >/dev/null ) then
   echo "73 55 48 : Passed"
else
    echo "73 55 48 : Failed"
    exit 1
fi


if (echo "48\n55\n73\n"  | ./pythagorean | grep -i "yes" >/dev/null ) then
   echo "48 55 73 : Passed"
else
    echo "48 55 73 : Failed"
    exit 1
fi

if (echo "7\n24\n25\n"  | ./pythagorean | grep -i "yes" >/dev/null ) then
   echo "7 24 25 : Passed"
else
    echo "7 24 25 : Failed"
    exit 1
fi

if (echo "24\n7\n25\n"  | ./pythagorean | grep -i "yes" >/dev/null ) then
   echo "24 7 25 : Passed"
else
    echo "24 7 25 : Failed"
    exit 1
fi

if (echo "24\n25\n7\n"  | ./pythagorean | grep -i "yes" >/dev/null ) then
   echo "24 25 7 : Passed"
else
    echo "24 25 7 : Failed"
    exit 1
fi

if (echo "7\n24\n26\n"  | ./pythagorean | grep -i "no" >/dev/null ) then
   echo "7 24 26 : Passed"
else
    echo "7 24 26 : Failed"
    exit 1
fi

if (echo "5\n7\n25\n"  | ./pythagorean | grep -i "no" >/dev/null ) then
   echo "5 7 25 : Passed"
else
    echo "5 7 25 : Failed"
    exit 1
fi

if (echo "24\n25\n1\n"  | ./pythagorean | grep -i "no" >/dev/null ) then
   echo "24 25 1 : Passed"
else
    echo "24 25 1 : Failed"
    exit 1
fi

echo "All good"
exit 0
