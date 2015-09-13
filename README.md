# longlongbug_test
This repository demonstrates a longlong bug in Visual C++ 2015. The bug only occurs in x86 Release mode. To reproduce the bug, simply open the project and run it in x86 release mode. The output should be

    Some text
    34

But instead, it is

    Some text
    1688354232
