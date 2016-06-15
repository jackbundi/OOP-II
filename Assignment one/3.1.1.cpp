oopii@oopiibox:~$ ls
Desktop  Documents  Downloads  Music  Pictures  Public  Templates  Videos
oopii@oopiibox:~$ cd Desktop
oopii@oopiibox:~/Desktop$ ls
a.out           code10.cpp  code4cpp   code6.cpp  code8.cpp  question_One.cpp
assignment_One  code11.cpp  code5.cpp  code7.cpp  code9.cpp
oopii@oopiibox:~/Desktop$ g++ question_One.cpp
question_One.cpp: In function ‘int main()’:
question_One.cpp:11:10: error: conflicting declaration ‘char arg1’
     char arg1 = 'A';
          ^
question_One.cpp:7:9: note: previous declaration as ‘int arg1’
     int arg1;
         ^
oopii@oopiibox:~/Desktop$ 




















