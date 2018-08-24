[jerry@CentOS project]$ pwd
/home/jerry/jerry_repo/project/src
[jerry@CentOS src]$ git status -s
M string_operations.c
?? string_operations
[jerry@CentOS src]$ git add string_operations.c
[jerry@CentOS src]$ git commit -m "Added my_strcat function"
[master b4c7f09] Added my_strcat function
1 files changed, 13 insertions(+), 0 deletions(-)
[jerry@CentOS src]$ git format-patch -1
0001-Added-my_strcat-function.patch
The above command creates .patch files inside

